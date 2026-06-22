#include "hash_tables.h"
#include <string.h> /* Guard explicitly for strcmp and strdup */
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table structure.
 * @key: The unique key string (cannot be an empty string).
 * @value: The data value string associated with the key (must be duplicated).
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current = NULL, *new_node = NULL;
	char *new_value = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists -> Update value */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	/* Key does not exist -> Create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Handle collision: prepend node to head of list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

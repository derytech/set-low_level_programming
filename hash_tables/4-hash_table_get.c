#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the hash table structure to look into.
 * @key: The key string you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current = NULL;

	/* Guard clauses for invalid inputs */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Find the designated array bucket index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search through the linked list chain at that index position */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	/* Key does not exist in the hash table */
	return (NULL);
}

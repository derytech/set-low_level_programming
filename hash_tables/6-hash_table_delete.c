#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all allocated memory.
 * @ht: A pointer to the hash table structure to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	/* Loop through each bucket index of the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Traverse and free the linked list chain at this index */
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	/* Free the underlying node array and the table structural wrapper */
	free(ht->array);
	free(ht);
}

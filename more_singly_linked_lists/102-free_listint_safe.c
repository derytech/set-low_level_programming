#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely (handles loops)
 * @h: pointer to head pointer
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nodes[1024];
	size_t i = 0, j, count = 0;
	listint_t *tmp;

	if (h == NULL)
		return (0);

	while (*h)
	{
		/* check if node already visited */
		for (j = 0; j < i; j++)
		{
			if (nodes[j] == *h)
			{
				*h = NULL;
				return (count);
			}
		}

		nodes[i++] = *h;
		tmp = (*h)->next;
		free(*h);
		count++;
		*h = tmp;
	}

	*h = NULL;
	return (count);
}

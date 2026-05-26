#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to head of list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nodes[1024];
	size_t i = 0, j;

	while (head)
	{
		/* check if node already visited */
		for (j = 0; j < i; j++)
		{
			if (nodes[j] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (i);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);

		nodes[i++] = head;
		head = head->next;
	}

	return (i);
}

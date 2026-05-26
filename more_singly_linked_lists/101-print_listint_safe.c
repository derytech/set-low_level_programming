#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (head != NULL)
	{
		/* print current node */
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		slow = slow->next;
		if (fast && fast->next)
			fast = fast->next->next;
		else
			fast = NULL;

		head = head->next;

		/* loop detected */
		if (slow && fast && slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	return (count);
}

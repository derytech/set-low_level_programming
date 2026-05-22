#include "lists.h"

/**
 * sum_listint - returns sum of all n in a listint_t list
 * @head: pointer to first node
 *
 * Return: sum of all node values, or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

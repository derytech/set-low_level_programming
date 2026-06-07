#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t node1;
	dlistint_t node2;
	size_t n;

	node1.n = 8;
	node1.prev = NULL;
	node1.next = &node2;

	node2.n = 9;
	node2.prev = &node1;
	node2.next = NULL;

	head = &node1;

	n = print_dlistint(head);
	printf("-> %lu elements\n", n);

	return (0);
}

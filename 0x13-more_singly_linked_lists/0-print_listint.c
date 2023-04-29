#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: integer input
 * Return:  number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		total++;
		current = current->next;
	}

	return (total);
}

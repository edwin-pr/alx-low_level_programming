#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint_safe -  function that prints a listint_t linked list
 *
 * @head: list of type listint_t to print
 *
 * Return: countber of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}

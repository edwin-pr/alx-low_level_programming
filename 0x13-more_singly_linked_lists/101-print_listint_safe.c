#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s = head, *f = head;
	size_t c = 0;

	if (head == NULL)
		return (0);

	while (s != NULL && f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			c++;
			while (s != head)
			{
				c++;
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("[%p] %d\n", (void *)head, head->n);
			return (c);
		}
		printf("[%p] %d\n", (void *)s, s->n);
		c++;
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		c++;
		head = head->next;
	}

	return (c);
}

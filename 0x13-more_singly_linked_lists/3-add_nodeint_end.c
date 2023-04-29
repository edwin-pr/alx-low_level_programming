#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at end of list
 * @head: head
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *c;

	/* Allocate memory for the last */
	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);

	/* Set the value and the next pointer of the last */
	last->n = n;
	last->next = NULL;

	/* If the list is empty, set the head pointer to the last */
	if (*head == NULL)
	{
		*head = last;
	}
	/* Otherwise, find the last node and set its next pointer to the last */
	else
	{
		c = *head;
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = last;
	}

	return (last);
}

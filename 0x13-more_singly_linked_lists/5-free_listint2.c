#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *tmp;

	if (!head)
	{
		return;
	}
	/* Free each node in the list */
	c = *head;
	while (c != NULL)
	{
		tmp = c;
		c = c->next;
		free(tmp);
	}

	/* Set head to NULL */
	*head = NULL;
}

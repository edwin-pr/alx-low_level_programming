#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *c, *tmp;

	/* Free each node in the list */
	c = head;
	while (c != NULL)
	{
		tmp = c;
		c = c->next;
		free(tmp);
	}
}

#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: head
 * @idx: index of the list
 * @n: integer
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *current;
	unsigned int i;

	/* Create the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	/* Special case for inserting at the head of the list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Find the previous node and the current node at the specified index */
	prev = NULL;
	current = *head;
	for (i = 0; i < idx && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL && i < idx)
	{
		free(new);
		return (NULL);
	}

	/* Insert the new node between the previous node and the current node */
	new->next = current;
	prev->next = new;

	/* Return the address of the new node */
	return (new);
}

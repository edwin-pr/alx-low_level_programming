#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: head
 *@n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value and the next pointer of the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}

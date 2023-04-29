#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head
 * Return: if the linked list is empty return 0 otherwise current_data.
 */
int pop_listint(listint_t **head)
{
	int current_data;
	listint_t *tmp;

	/* If the list is empty, return 0 */
	if (*head == NULL)
		return (0);

	/* Store the current_data in the head node */
	current_data = (*head)->n;

	/* Free the head node */
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	/* Return the current_data from the head node */
	return (current_data);
}

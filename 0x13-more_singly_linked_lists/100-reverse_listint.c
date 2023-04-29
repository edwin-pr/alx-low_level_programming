#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to head of linked list
 * Return: pointer to new head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}

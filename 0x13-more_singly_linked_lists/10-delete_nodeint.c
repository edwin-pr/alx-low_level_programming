#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: double pointer to head node of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *del_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del_node = *head;
		*head = (*head)->next;
		free(del_node);
		return (1);
	}

	prev_node = *head;
	del_node = (*head)->next;

	while (index > 1 && del_node != NULL)
	{
		prev_node = del_node;
		del_node = del_node->next;
		index--;
	}

	if (del_node == NULL)
		return (-1);

	prev_node->next = del_node->next;
	free(del_node);

	return (1);
}

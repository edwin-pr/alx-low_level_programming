#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - Prints a linked list of integers safely
 * @head: A pointer to the first node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current_node = head, *next_node;

	while (current_node != NULL)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)current_node, current_node->n);

		next_node = current_node->next;

		if (next_node >= current_node)
		{
		current_node = next_node;
		}
		else
		{
		printf("-> [%p] %d\n", (void *)next_node, next_node->n);
		break;
		}
	}

	return (num_nodes);
}

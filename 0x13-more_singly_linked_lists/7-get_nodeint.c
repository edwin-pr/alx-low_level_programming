#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: head
 * @index: index of the node, starting at 0
 * Return: if the node does not exist, return NULL, else nodeA
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *nodeA = head;

	/* Traverse the linked list until the desired nodeA is reached */
	for (x = 0; nodeA != NULL && x < index; x++)
		nodeA = nodeA->next;

	/* If the desired nodeA was found, return a pointer to it */
	if (x == index)
		return (nodeA);

	/* If the desired nodeA was not found, return NULL */
	return (NULL);
}

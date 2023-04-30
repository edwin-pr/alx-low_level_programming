#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of type listint_t
 *
 * @h: A pointer to a pointer to the first node of the list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t  length = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	for (current = *h; current != NULL; current = next)
	{
		length++;
		next = current->next;
		free(current);

		if ((void *)next <= (void *)current)
			break;
	}

	*h = NULL;

	return (length);
}

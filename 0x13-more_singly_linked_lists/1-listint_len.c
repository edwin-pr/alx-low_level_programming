#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: integer
 * Return: total on success.
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		total++;
		current = current->next;
	}

	return (total);
}

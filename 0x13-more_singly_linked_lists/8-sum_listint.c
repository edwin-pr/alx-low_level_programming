#include "lists.h"

/**
 * sum_listint -function that returns the sum of all the data (n)
 * @head: head
 * Return: if the list is empty, return 0, else sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *data = head;

	/* Traverse the linked list and add up the values */
	while (data != NULL)
	{
		sum += data->n;
		data = data->next;
	}

	/* Return the sum */
	return (sum);
}

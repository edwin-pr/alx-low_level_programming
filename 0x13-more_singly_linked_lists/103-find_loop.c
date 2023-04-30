#include "lists.h"

/**
 * find_listint_loop - Finds the start of the loop in a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	if (head == NULL)
		return (NULL);

	s = head;
	f = head;

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			s = head;

			while (s != f)
			{
				s = s->next;
				f = f->next;
			}

			return (s);
		}
	}

	return (NULL);
}

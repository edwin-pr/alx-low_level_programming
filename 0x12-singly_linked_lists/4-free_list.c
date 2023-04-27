#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/*traverse the list and free each node*/
		temp = head->next; /*store the next node*/
		free(head->str); /*free the duplicated string*/
		free(head); /*free the node*/
		head = temp; /*move to the next node*/
	}
}

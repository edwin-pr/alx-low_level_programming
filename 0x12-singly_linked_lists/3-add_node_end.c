#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t)); /* allocate memory for new node*/
	if (new_node == NULL)
	{
		 /* check if memory allocation was successful*/
		return (NULL);
	}

	new_node->str = strdup(str); /* duplicate str*/
	if (new_node->str == NULL)
	{
		 /* check if strdup failed*/
		free(new_node); /* free allocated memory*/
		return (NULL);
	}

	new_node->next = NULL; /*set the next pointer to NULL*/

	if (*head == NULL)
	{
		 /* check if the list is empty*/
		*head = new_node; /* if so, set the new node as the head*/
	}
	else
	{
		temp = *head; /* traverse the list to find the last node*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node; /* set the new node as the next of the last node*/
	}
	return (new_node); /* return the address of the new node*/
}

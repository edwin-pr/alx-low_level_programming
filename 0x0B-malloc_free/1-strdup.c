#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  function returns a pointer to a new string
 * @str: string copied
 *
 * Return: NULL if str = NULL otherwise pointer to the duplicated string
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
	return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}

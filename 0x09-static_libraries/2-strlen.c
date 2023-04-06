#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @: string value
 * Return: length on success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

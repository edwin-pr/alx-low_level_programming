#include "main.h"
#include<stddef.h>

/**
 * _strchr - entry point of function
 * @s: input value
 * @c: input value
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	return (0);
}

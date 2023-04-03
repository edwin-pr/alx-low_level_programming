#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		char *p = accept;

		for (i = 0; p[i]; i++)
		{
			if (*s == p[i])
			{
				length++;
				break;
			}
			else if (p[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}

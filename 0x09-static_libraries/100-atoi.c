#include "main.h"

/**
 * _atoi - a function that convert a string into an integer.
 *
 * @s: the string to be  used
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int k = 1, i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			k *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= k;
	return (r);
}

#include "main.h"
/**
 * _strncat - entry function that concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _memcpy - an entry point of a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes being stored
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}


#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;
	int l;

	l = n;

	for (k = 0; k < l; k++)
	{
		dest[k] = src[l];
		n--;
	}
	return (dest);
}

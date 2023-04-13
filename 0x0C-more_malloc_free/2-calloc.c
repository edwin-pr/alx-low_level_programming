#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array,using malloc
 * @nmemb: input
 * @size: input
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}

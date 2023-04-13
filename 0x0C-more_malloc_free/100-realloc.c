#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: input
 * @new_size: input
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	memcpy(p, ptr, (new_size < old_size) ? new_size : old_size);
	free(ptr);

	return (p);
}


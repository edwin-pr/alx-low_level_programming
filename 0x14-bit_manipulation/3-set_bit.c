#include "main.h"
#include <stdio.h>
/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index.
 * @n: integer.
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* index out of range*/
	}
	else
	{
		*n |= (1ul << index);
		return (1);
	}
}

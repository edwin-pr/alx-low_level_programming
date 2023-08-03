#include <stdio.h>
#include "main.h"
/**
 * clear_bit -Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to be changed
 * @index: The index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is within the range of the unsigned long int*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: index out of range*/
	}

	/*Create a mask with a 0 in the position of the bit to clear*/
	 mask = ~(1UL << index);
	/* Clear the bit at the given index*/
	*n &= mask;

	return (1); /* Success*/
}


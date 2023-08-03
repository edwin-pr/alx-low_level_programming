#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	/* Count the number of set bits in the XOR of the two numbers*/
	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}

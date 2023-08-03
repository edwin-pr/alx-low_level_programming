#include "main.h"
#include <stdio.h>
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: The integer number
 *@index: is the index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* shift n to the right by index bits, then mask with 1 to bit value */
	return ((n >> index) & 1);
}

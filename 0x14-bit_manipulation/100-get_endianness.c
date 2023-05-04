#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *) &i;

	/* Check the value of the first byte in the integer representation*/
	if (*p == 1)
	{
		return (1); /*Little endian*/
	}
	else
	{
		return (0); /* Big endian*/
	}
}

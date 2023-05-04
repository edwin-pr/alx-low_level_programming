#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a No.
 * @n: The number to convert and print.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}

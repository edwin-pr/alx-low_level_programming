#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - Entry point
 * @a: integer pointer
 * @size: size of array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, p;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sum1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		sum2 += *(a + (j * size) + (size - i - 1));
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}

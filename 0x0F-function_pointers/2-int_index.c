#include "function_pointers.h"
/**
 * int_index - a function that return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}


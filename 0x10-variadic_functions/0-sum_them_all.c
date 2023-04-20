#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: integer
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int add = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(args, int);
	}
	va_end(args);

	return (add);
}

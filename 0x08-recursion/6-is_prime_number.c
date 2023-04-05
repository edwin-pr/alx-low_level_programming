#include "main.h"

int is_divisible(int n, int d);
/**
 * is_divisible - Entry point
 * Description: Prime number
 * @n: Integer
 * @d: Integer
 * Return: 1 if prime number 0 otherwise
 */
int is_divisible(int n, int d)
{
	if (d == 1 || d == n)
	{
		return (0);
	}
	else if (n % d == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, d - 1));
	}
}

/**
 * is_prime_number - entry point of a function
 * @n: integer
 * Return: 1 if prime number 0 on otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (!is_divisible(n, n - 1));
	}
}


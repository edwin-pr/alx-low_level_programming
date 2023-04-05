#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: integer
 * @y: integer
 * Return: on succes
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

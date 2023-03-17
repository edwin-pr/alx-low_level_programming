#include<stdio.h>

/**
 * main - prin 0-9 separated with commas, using putchar
 * Return: 0 always on success
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar('');
		}
		n++;
	}
	putchar('\n');

	return (0);
}

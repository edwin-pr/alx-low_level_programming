#include<stdio.h>

/**
 * main - print alphabet reversed using putchar
 * Return: 0 always on success
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}

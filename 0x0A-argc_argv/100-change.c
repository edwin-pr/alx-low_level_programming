#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, c, t, n;
	int denominations[] = {25, 10, 5, 2, 1};
	/* Coin Denominations available */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
		/* Check for correct no. of arguments */
	}

	t = atoi(argv[1]);
	/* Converts argument to Int */
	if (t < 0)
	{
		printf("0\n");
		return (0);
		/* Check for -ve input */
	}
	c = 0;
	n = sizeof(denominations) / sizeof(denominations[0]);
	/* Number of denominations */

	for (i = 0; i < n; i++)
	{
		c += t / denominations[i];
		/* Add no of coins for current denomination */
		t %= denominations[i];
		/* What is the remaining denominations */
	}
	printf("%d\n", c); /* Minimum no of coins */
	return (0);
}

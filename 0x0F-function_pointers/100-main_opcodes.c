#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its own opcodes
 * @argc: number of arguments made 
 * @argv: array of arguments available
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int b, x;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", array[x]);
			break;
		}
		printf("%02hhx ", array[x]);
	}
	return (0);
}


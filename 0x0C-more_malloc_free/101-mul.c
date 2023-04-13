#include <stdio.h>
#include <stdlib.h>
/**
 * str_to_int - entry point
 * @str: string
 * Return: return num
 */
int str_to_int(char *str)
{
	int num = 0;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			printf("Error\n");
			exit(98);
		}
	num = num * 10 + (*str - '0');
	str++;
	}
	return (num);
}

/**
 * multiply - entry point
 * @num1: input
 * @num2: input
 *
 * Return: num1 * num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	printf("%d\n", multiply(num1, num2));

	return (0);
}

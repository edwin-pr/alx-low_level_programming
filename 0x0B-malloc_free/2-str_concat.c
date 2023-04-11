#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(len1 + len2 + 1);

	if (!result)
		return (NULL);

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);

	return (result);
}

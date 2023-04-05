#include "main.h"
/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case: both strings are empty*/
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	/* Case 1: s2 starts with a '*' */
	if (*s2 == '*')
	{
	/* Match s1 with '*' in s2, or skip '*'*/
	return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	/* Case 2: the current characters match or s2 has a '?'*/
	if (*s1 == *s2 || *s2 == '?')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	/* Case 3: no match*/
	return (0);
}

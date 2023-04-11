#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_words(char *str);
int get_next_word(char *str, char **word);
/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, count;
	char **words, *word;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		if (!get_next_word(str + j, &word))
		{
			for (i--; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		words[i] = word;
		j += strlen(word) + 1;
	}
	words[count] = NULL;

	return (words);
}

/**
 * count_words - counts the number of words contained within a string.
 * @str: the string to be checked
 *
 * Return: the number of words contained in a str
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (isspace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * get_next_word - locates the index marking the end of the
 *            first word contained within a string
 * @str: the string to being checked
 * @word: string
 * Return: the index marking the end of the initial word pointed to by str
 */
int get_next_word(char *str, char **word)
{
	int i, len;

	while (isspace(*str))
		str++;

	len = 0;
	while (str[len] != '\0' && !isspace(str[len]))
		len++;

	*word = malloc((len + 1) * sizeof(char));
	if (*word == NULL)
		return (0);

	for (i = 0; i < len; i++)
		(*word)[i] = str[i];
	(*word)[len] = '\0';

	return (1);
}

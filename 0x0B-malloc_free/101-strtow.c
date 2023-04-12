#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string paramenter
 * Return: null
 */


char **strtow(char *str)
{
	char **words;
	int word_count;
	char *p;
	char *word;
	char *start;
	int i, j;

	word_count = 0;
	p = str;
	if (str == NULL || *str == '\0')
		return (NULL);
	for (*p = str; *p != '\0'; p++)
	{
		if (*p != ' ' && (*(p + 1) == ' ' || *(p + 1) == '\0'))
			word_count++;
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (*p = str; *p != '\0';)
	{
		while (*p == ' ')
			p++;
		if (*p == '\0')
			break;
		while (*p != ' ' && *p != '\0')
			p++;
		words[i] = malloc((p - start + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], start, p - start);
		words[i][p - start] = '\0';
		i++;
	}
	word[i] = NULL;
	return (words);
}

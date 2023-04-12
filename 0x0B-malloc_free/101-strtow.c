#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	int i;
	char *word;
	char *start;
	int len;
	int j;

	word_count = 0;
	p = str;
	i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*p != '\0')
	{
		while (*p == ' ')
			p++;
		if (*p != '\0')
		{
			word_count++;
			while (*p != '\0' && *p != ' ')
			{
				p++;
			}
		}
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*p != '\0')
	{
		while (*p == ' ')
			p++;
		if (*p != '\0')
		{
			start = p;
			while (*p != '\0' && *p != ' ')
			{
				p++;
			}
			len = p - start;
			word = malloc((len + 1) * sizeof(char));
			if (word == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(word, start, len);
			word[len] = '\0';
			words[i] = word;
			i++;
		}
	}
	words[i] = NULL;
	return (words);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first parameter
 * @av: second parameter
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	int ch;
	int i;
	int j;
	int k;
	char *s;

	ch = 0;
	i = 0;
	j = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}

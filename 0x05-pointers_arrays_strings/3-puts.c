#include "main.h"
/**
 * _puts - function printing a string followed by a new line
 * @str: a string to be printed out in stdout
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

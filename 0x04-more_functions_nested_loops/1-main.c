#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'g';
	printf("%c: %d\n", c, _isdigit(c));
	c = '-';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}

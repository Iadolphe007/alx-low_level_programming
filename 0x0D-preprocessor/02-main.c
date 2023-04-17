#include <stdio.h>
#ifndef x
#define x  __FILE__
#endif

/**
 * main - print the compiled file
 * Return: always zero
 */

int main(void)
{
	printf("%s\n", x);
	return (0);
}

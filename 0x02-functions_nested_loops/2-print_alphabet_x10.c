#include "main.h"
/**
 * print_alphabet_x10 - print 10x alphabet
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}

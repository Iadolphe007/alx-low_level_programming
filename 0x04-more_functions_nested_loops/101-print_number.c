#include "main.h"
/**
 * print_number - return any integer
 * @n: charcter to give an integer
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if  (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x = x / 10;

	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}

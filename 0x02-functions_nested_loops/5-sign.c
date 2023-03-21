#include "main.h"
/**
 * print_sign - function which return the sign of the number
 * @n: any chacter to be considered when returning value
 * Return: 1 is is posritive, zero id n = 0 and -1 id it's a negative number
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}

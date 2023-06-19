#include "main.h"
/**
 * _abs - functionto return the absolute value
 * @a: parameter
 * Return: always positive number
 */



int _abs(int a)
{

	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

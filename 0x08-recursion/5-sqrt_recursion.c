#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns teh natural square root of a number
 * _sqrt - calculate square root of natural number
 * @n: number to calculate th enatural square root
 * @i: iterate number
 * Return: the natural square root
 */


int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


int _sqrt(int n, int i)
{
	int sqrt;

	sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

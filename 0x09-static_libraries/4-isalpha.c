#include "main.h"

/**
 * _isalpha - function returning lower and uppercase letter
 * @c: any character to be printed
 * Return: 1 if it's true else 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 90)
	{
		return (1);
	}
	else if (c > 96 && c < 122)
	{
		return (1);
	}
	else
		return (0);
}


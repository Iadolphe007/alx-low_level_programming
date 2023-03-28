#include "main.h"
/**
 * _atoi - function which convert string into an integer
 * @s: taken string as parameter
 * Return: a string converted to an integer with consideration of sign
 */

int _atoi(char *s)
{
	int sign;
	int result;

	sign = 1;
	result = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}

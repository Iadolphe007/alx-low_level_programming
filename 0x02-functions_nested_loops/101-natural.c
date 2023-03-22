#include <stdio.h>
/**
 * main - compute multiple of a number
 * Return: always 0
 */


int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		else
			sum = sum;

	}
	printf("%d\n", sum);
	return (0);
}

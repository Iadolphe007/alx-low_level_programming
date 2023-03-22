#include <stdio.h>
/**
 * main - return the sum of fiboancci number
 * Return: always zero
 */

int main(void)
{
	int a;
	int b;
	int c;
	int sum;

	sum = c;
	a = 0;
	b = 1;
	c = 2;

	while (b + c < 4000000)
	{
		c += b;
		if (b % 2 == 0)
			sum += c;
			b = c - b;
			a++
	}
	printf("%d\n", sum);
	return (0);
}

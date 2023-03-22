#include <stdio.h>
/**
 * main - return the sum of fiboancci number
 * Return: always zero
 */

int main(void)
{
	int a;
	long b;
	long c;
	long sum;

	a = 0;
	b = 1;
	c = 2;
	sum = c;

	while (c + b < 4000000)
	{
		c += b;
		if (c % 2 == 0)
		{
			sum += c;
			b = c - b;
		{
		a++;
	}
	printf("%ld\n", sum);
	return (0);
}

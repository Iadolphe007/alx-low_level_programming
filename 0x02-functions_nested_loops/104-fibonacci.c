#include <stdio.h>
/**
 * main - print 98 fibonnaci number
 * Return: always zero
 */

int main(void)
{
	int a;
	unsigned long b;
	unsigned long c;

	a = 0;
	b = 1;
	c = 2;

	while (a < 98)
	{
		if (a == 0)
			printf("% lu", b);
		else if (a == 1)
			printf(", %lu", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %lu", c);
		}
	}
	printf("\n");
	return (0);
}

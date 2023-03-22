
#include <stdio.h>
/**
 * main - funtion returning fibonacci number
 * Return: always zero
 */


int main(void)
{
	int a;
	long b;
	long c;

	a = 0;
	b = 1;
	c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(",%ld", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %ld", c);
		}
		a++;
	}
	printf("\n");
	return (0);
}

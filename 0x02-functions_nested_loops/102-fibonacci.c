
#include <stdio.h>
/**
 * main - funtion returning fibonacci number
 * Return: always zero
 */


int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%d", b);
		else if (a == 1)
			printf(",%d", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %d", c);
		}
		++i;
	}
	printf("\n");
	return (0);
}

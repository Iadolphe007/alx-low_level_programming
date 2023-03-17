#include<stdio.h>
/**
 * main - entry point
 * Return: value is 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 98; i++)
	{
		for (j = i + 1; j < 99; j++)
		{
			putchar(i + '0');
			putchar(i + '0');
			putchar(' ');
			putchar(j + '0');
			putchar(j + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);

}

# include<stdio.h>
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x < y && x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}

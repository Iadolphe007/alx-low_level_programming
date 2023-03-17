#include <stdio.h>
/**
 * main - print alphabetic letter
 * Return: always zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

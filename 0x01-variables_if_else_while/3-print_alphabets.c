#include<stdio.h>
/**
 * main - function returning lower case and upper case alphabet
 * Return: always set to zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

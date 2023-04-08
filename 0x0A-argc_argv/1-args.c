#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Return: always 0
 * @argc: counter
 * @argv: vector
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	if (argc == 0)
	{
		count = 0;	
	}
	else
		count = printf("%d\n", (argc-1));

	return (count);
}

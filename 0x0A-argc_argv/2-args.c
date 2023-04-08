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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}

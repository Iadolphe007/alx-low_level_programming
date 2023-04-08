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
	int prod;
	int num1;
	int num2;

	prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}

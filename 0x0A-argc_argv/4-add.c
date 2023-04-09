#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - function
* Return: sum
* @argc: counter
* @argv: vector
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (sum);

}

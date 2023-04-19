#include <stdio.h>
#include <stdlib.h>

/**
 * main - ptint opcodes
 * @argc: count
 * @argv: vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx%c", arr[i], i == bytes - 1 ? '\n' : ' ');
	}
	printf("\n");
	return (0);

}

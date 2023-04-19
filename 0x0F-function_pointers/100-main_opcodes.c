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
	int num_bytes;
	char *start;
	char *end;
	char *p;

	num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	start = (char *)&main;
	end = start + num_bytes;
	for (p = start; p < end; p++)
	{
		printf("%02x", *p & 0xff);
	}
	printf("\n");
	return (0);

}

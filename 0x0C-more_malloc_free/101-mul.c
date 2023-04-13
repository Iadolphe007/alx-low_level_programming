#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_positive_number - check for positive integer
 * @num: first arg
 * Return: 1
 */

int is_positive_number(char *num)
{
	size_t i;

	if (strlen(num) == 0)
		return (0);
	for (i = 0; i < strlen(num); i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	if (num[0] == '0' && strlen(num) > 1)
		return (0);
	return (1);
}
/**
 * main - checks the number of arguments
 * @argv: vector
 * @argc: count
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *num1, *num2;
	long result;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	if (!is_positive_number(num1) || !is_positive_number(num2))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	result = atoll(num1) * atoll(num2);
	printf("%ld\n", result);
	return (0);
}

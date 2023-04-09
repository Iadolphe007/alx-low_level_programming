#include <stdlib.h>
#include <stdio.h>

/**
* main - function
* Return: always 0
* @argc: counter
* @argv: vector
*/

int main(int argc, char *argv[])
{
	int cents;
	int quarters;
	int dimes;
	int pennies;
	int nickels;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;
	cents = cents % 25;
	dimes = cents / 10;
	cents = cents % 10;
	nickels = cents / 5;
	cents = cents % 5;
	pennies = cents;

	printf("%d\n", quarters + dimes + nickels + pennies);
	return (0);
}

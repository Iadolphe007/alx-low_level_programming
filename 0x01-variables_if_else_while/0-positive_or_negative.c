#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function return positive or negative number
 * Return: always give 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d\n is positive", n);
	else if (n < 0)
		printf("%d\n is negative", n);
	else
		printf("%d\n is zero", n);


	return (0);
}

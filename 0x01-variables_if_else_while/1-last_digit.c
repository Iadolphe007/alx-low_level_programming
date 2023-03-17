#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - function retruning the last number
 * Return: always zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("%d and is greater than 5",  n);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0", n);
	else
		printf("%d and is 0", n);
	printf("\n");

	return (0);
}

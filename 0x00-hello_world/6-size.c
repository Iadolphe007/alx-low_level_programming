#include <stdio.h>
/**
 * main - used function to print size of computer program
 *
 * Return: return walue is assigned to zero
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	printf("%lu", sizeof(float));
	return (0);
}

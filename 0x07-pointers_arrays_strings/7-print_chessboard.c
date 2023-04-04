#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function which print chess board
 * @a: pointer to the first element of a string
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

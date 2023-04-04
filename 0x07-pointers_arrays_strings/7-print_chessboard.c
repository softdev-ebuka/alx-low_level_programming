#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: function params
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, k;

	for (x = 0 ; x < 8 ; x++)
	{
		for (k = 0 ; k < 8 ; k++)
		{
			_putchar (a[x][k]);
		}
		_putchar('\n');
	}
}

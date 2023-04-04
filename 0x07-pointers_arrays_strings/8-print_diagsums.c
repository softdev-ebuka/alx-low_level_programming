#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of square matrix of integers.
 * @a: function params
 * @size: function params
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, y, sum1 = 0, sum2 = 0, c, d = 0;

	c = size - 1;
	for (i = 0 ; i < size ; x++)
	{
		for (y = 0 ; y < size ; y++)
		{
			if (i == y)
				sum1 += a[d];
			if (y == c)
				sum2 += a[d];
			d++;
		}
		c--;
	}
	printf("%i, %i\n", sum1, sum2);
}

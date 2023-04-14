#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that create an array of integers
 * @min: function params
 * @max: function params
 * Return: pointer to tthe newly created array
 */
int *array_range(int min, int max)
{
	int x, y;
	int *a;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	a = malloc(sizeof(int) * y);
	if (a == NULL)
		return (NULL);
	for (x = 0 ; x < y ; x++, min++)
	{
		a[x] = min;
	}
	return (a);
}

#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: nothing
 */
int **alloc_grid(int width, int height)
{
	int x, y, z, t;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (x = 0 ; x < height ; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (y = x ; y >= 0 ; y--)
			{
				free(a[y]);
			}
			free(a);
			return (NULL);
		}
	}

	for (z = 0 ; z < height ; z++)
	{
		for (t = 0 ; t < width ; t++)
		{
			a[z][t] = 0;
		}
	}
	return (a);
}

#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 *
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: function to be used to compare values
 *
 * Return: index of the first element if cmp function does not
 * return 0, -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int x = 0;

		while (x < size)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
			x++;
		}
	}
	return (-1);
}

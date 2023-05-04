#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the array to be operated upon
 * @size: size of the array
 * @action: the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0 ; x < size ; x++)
		action(array[x]);
}

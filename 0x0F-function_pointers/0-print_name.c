#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: points to a function that prints a character
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int x;

	if (name == NULL || f == NULL)
		return;

	for (x = 0 ; name[x] != '\0' ; x++)
		f(&name[x]);
}

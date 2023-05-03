#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: points to function that prints a character
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		while (*name)
		{
			f(*name++);
		}
	}
}

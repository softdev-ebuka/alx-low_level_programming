#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: points to function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print_char - print character using _putchar
 *
 * @c: character printed
 *
 * Return: nothing
 */
void print_char(char *c)
{
	while (*c)
		_putchar(*(c++));
	_putchar('\n');
}

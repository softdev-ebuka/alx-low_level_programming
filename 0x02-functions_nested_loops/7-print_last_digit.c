#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @x: parameter to be used
 *
 * Return: z
 */
int print_last_digit(int x)
{
	int z;

	z = x % 10;
	if (x < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}

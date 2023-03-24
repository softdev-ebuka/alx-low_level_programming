#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 *
 * @n: the integer to print
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
	n *= -1;
	r = n;
	_putchar('-');
	}
	r /= 10;
	if (r != 0)
	print_number(r);
	_putchar((unsigned int) n % 10 + '0');
}

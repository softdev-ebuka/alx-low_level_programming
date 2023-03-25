#include "main.h"

/**
 * times_table - print the 9x table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int k, l, m, x, y;

	for (k = 0 ; k <= 9 ; k++)
	{
	for (l = 0 ; l <= 9 ; l++)
	{
	m = k * l;
	if (m > 9)
	{
	x = m % 10;
	y = (m - x) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(y + '0');
	_putchar(x + '0');
	}
	else
	{
	if (l != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(m + '0');
	}
	}
	_putchar('\n');
	}
}

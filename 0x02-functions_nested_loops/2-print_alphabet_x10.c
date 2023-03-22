#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabets in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	char k;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}

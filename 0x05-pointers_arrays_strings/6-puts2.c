#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: function parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int k = 0;

	while (str[k] != '\0')
		k++;
	for (i = 0 ; i < k ; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

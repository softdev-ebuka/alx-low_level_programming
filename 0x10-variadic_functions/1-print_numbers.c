#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @seperator: string to be printed between num
 * @n: num of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0 ; x < n ; x++)
	{
		printf("%d", va_arg(list, int));
		if (seperator && x < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}

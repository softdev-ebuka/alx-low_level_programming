#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: function params
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	if (n != 0)
	{
		for (x = 0 ; x < n ; x++)
			sum += va_arg(list, unsigned int);
	va_end(list);
	return (sum);
	}
}

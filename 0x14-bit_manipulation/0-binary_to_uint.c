#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: points to string of 0 and 1 chars
 *
 * Return: the results, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (!b)
		return (0);

	for (x = 0 ; b[x] != '\0' ; x++)
	{
		if (b[x] == '1')
			result = (result << 1) | 1;
		else if (b[x] == '0')
			result <<= 1;
		else
			return (0);
	}

	return (result);
}

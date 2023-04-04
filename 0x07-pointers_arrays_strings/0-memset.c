#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the first value
 * @b: the second value
 * @n: the third value
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		s[x] = b;
	return (s);
}

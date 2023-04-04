#include "main.h"

/**
 * _strpbrk - function that searches string for any set of a byte
 *
 * @s: first value
 * @accept: second value
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;

	while (*s)
	{
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
				return (s);
			x++;
		}
		x = 0;
		s++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 *
 * @s: first value
 * @accept: second value
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0;
	unsigned int a = 0;

	while (s[y] != ' ' && s[y] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[y] == accept[x])
				a++;
			x++;
		}
		y++;
		x = 0;
	}
	return (a);
}

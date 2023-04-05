#include "main.h"

/**
 * palind1 - returns lenght of a string
 * @c: string
 * @x: integer to count the lenght
 *
 * Return: 1 on success
 */
int palind1(char *c, int x)
{
	if (*c == 0)
		return (x - 1);
	return (palind1(c + 1, x + 1));
}
/**
 * palind2 - compares string versus string reverse
 * @c: string
 * @x: lenght
 *
 * Return: 1 on success
 */
int palind2(char *c, int x)
{
	if (*c != *(c + 1))
		return (0);
	else if (*c == 0)
		return (1);
	return (palind2(c + 1, x - 2));
}
/**
 * is_palindrome - returns 1 if a string is palindrome else 0 if not
 * @s: string to evaluate
 *
 * Return: on success 1
 */
int is_palindrome(char *s)
{
	int x;

	x = palind1(s, 0);
	return (palind2(s, 1));
}

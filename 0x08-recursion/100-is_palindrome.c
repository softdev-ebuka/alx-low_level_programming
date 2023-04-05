#include "main.h"

/**
 * palind2 - returns lenght of a string
 * @a: string
 * @x: integer to count the lenght
 *
 * Return: 1 on success
 */
int palind2(char *a, int x)
{
	if (*a == 0)
		return (x - 1);
	return (palind2(a + 1, x + 1));
}
/**
 * palind3 - compares string versus string reverse
 * @a: string
 * @x: lenght
 *
 * Return: 1 on success
 */
int palind3(char *a, int x)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, x - 2));
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

	x = palind2(s, 0);
	return (palind3(s, 1));
}

#include "main.h"

/**
 * prime2 - evaluates from 1 to n
 * @x: same number as n
 * @y: number that iterates fron 1 to n
 *
 * Return: 1 on success
 */
int prime2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % b == 0)
		return (0);
	return (prime2(x, y + 1));
}
/**
 * is_prime_number - returns 1 if the integer is a prime number else 0
 * @n: number
 *
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}

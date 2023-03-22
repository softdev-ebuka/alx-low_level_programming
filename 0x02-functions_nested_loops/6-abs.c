#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @x: parameters to be used
 *
 * Return: always x
 */
int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}

#include "main.h"

/**
 * flip_bits - returns num of bits needed to flip to get from 1 num to another
 *
 * @n: function params (1st num)
 * @m: function params (2nd num)
 *
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int len = 0;

	while (x)
	{
		len++;
		x &= (x - 1);
	}
	return (len);
}

#include "main.h"

/**
 * clear_bit - function that Sets value of bit to 0 at given index.
 *
 * @n: value containing the bit to clear.
 * @index: index starting from 0 of bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

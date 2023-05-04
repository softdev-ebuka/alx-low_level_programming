#include "main.h"

/**
 * get_bit - returns bit at a given index
 *
 * @n: the number used to find bit in
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}

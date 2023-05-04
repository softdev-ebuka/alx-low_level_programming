#include "main.h"

/**
 * get_endianness - Checks endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *t = (unsigned char *)&value;

	if (*t == 1)
		return (1);
	else
		return (0);
}

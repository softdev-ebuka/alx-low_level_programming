#include "main.h"

/**
 * _memcpy - copies memory arear
 *
 * @src: address of memory area to copy
 * @dest: adress of memory to print
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}

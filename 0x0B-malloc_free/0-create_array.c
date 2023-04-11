#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, & intializes with a specific char
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size <= 0)
		return (0);
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (0);
	for (x = 0 ; x < size ; x++)
		*(s + x) = c;
	*(s + 1) = '\0';
	return (s);
}

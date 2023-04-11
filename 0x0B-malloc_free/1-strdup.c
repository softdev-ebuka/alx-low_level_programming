#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int x, i;

	if (str == NULL)
		return (0);
	x = 0;
	while (*(str + 1))
		x++;

	s = malloc(sizeof(char) * x + 1);
	if (s == 0)
		return (0);
	for (i = 0 ; i <= x ; i++)
	{
		*(s + 1) = *(str + 1);
	}
	return (s)
}

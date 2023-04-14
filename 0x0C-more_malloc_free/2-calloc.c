#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: input
 * @size: input
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (x = 0 ; x < (nmemb * size) ; x++)
		p[x] = 0;
	return (p);
}

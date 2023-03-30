#include "main.h"

/**
 *  _strcmp - function that compares two strings
 *
 *  @s1: first string used in the comparison
 *  @s2: second string used to compare with first string
 *
 *  Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0 ; s1[x] != '\0' || s2[x] != '\0' ; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);
			else if (s1[x] > s2[x])
				return (s1[x] - s2[x]);
		}
		else
			return (0);
	}
	return (0);
}

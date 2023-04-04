#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: function parameter
 * @needle: function params
 *
 * Return: null byte
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0, x = 0, y, z = 0, c, d = 0;
	char *p;

	while (needle[count] != '\0')
		count++;
	while (haystack[d] != '\0')
		d++;
	if (count == 0)
		return (haystack);
	while (haystack[z] != '\0')
	{
		if (haystack[z] == needle[0])
		{
			p = &haystack[z];
			c = z;
			x = 0;
			for (y = 0 ; y < count ; y++)
			{
				if (haystack[c] == needle[y])
					x++;
				c++;
			}
		}
		if (x == count)
			return (p);
		z++;
	}
	return ('\0');
}

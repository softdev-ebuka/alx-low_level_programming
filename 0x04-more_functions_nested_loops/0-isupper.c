#include "main.h"

/**
 *  _isupper - checks for uppercase character
 *
 *  @c: parameter to be checked
 *
 *  Return: 1 if it is uppercase
 *  else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

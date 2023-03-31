#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13
 *
 * @s: string parameter
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int x;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (x = 0 ; x < 52 ; x++)
		{
			if (s[i] == data1[x])
				s[i] = datarot[x];
			break;
		}
	}
	return (s);
}

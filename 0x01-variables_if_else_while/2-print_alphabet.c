#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}

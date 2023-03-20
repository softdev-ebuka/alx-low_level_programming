#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse order
 *
 * Return: always 0
 */
int main(void)
{
	char k;

	for (k = 'z' ; k >= 'a' ; k--)
		putchar(k);
	putchar('\n');
	return (0);
}

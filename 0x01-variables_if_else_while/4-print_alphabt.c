#include <stdio.h>

/**
 * main - print all letters in lowercase without q and e
 *
 * Return: always 0
 */
int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		if (k != 'q' && k != 'e')
			putchar(k);
	putchar('\n');
	return (0);
}

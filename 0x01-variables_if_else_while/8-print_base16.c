#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	char j;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

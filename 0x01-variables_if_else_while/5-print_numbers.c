#include <stdio.h>

/**
 * main - print single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}

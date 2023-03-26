#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0, y = 1, next;

	while (i < 50)
	{
		next = x + y;
		x = y;
		y = next;
		printf("%lu", next);
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print the sum of evenfibonacci numbers < 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}

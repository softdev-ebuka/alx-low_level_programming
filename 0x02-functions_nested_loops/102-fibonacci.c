#include <stdio.h>i

/**
 * main - prints the first 50 fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0, y = 1, sum;

	while (i < 50)
	{
		sum = x + y;
		x = y;
		b = sum;
		printf("%lu", sum);
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

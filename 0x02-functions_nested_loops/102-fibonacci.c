#include <stdio.h>

/**
 * main - prints the first 52 fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	long y = 1, z = 2;

	while (x < 50)
	{
	if (x == 0)
	printf("%d", y);
	else if (x == 1)
	printf(", %d", z);
	else
	{
	z += y;
	y = z - y;
	printf(", %d", z);
	}
	++x;
	}
	printf("\n");
	return (0);
}

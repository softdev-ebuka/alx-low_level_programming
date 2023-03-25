#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 below 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
	z += x;
	}
	x++;
	}
	printf("%d\n", z);
	return (0);
}

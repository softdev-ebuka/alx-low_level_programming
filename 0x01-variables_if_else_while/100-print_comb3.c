#include <stdio.h>

/**
 * main - print possible different combination of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int j;

	for (x = 0 ; x < 10 ; x++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (x < j && x != j)
			{
				putchar(x + '0');
				putchar(j + '0');
				if (x + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

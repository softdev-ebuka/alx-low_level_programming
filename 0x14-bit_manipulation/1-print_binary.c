#include "main.h"

/**
 * print_binary - function that prints the binary rep of a num
 *
 * @n: num to be printed in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int max = 1;
	int len = sizeof(unsigned long int) * 8;
	int x = len - 1;
	int flag = 0;

	while (x >= 0)
	{
		if ((n & (max << x)) == 0 && !flag && x != 0)
			;
		else
		{
			if ((n & (max << x)) == 0)
				_putchar('0');
			else
			{
				_putchar('1');
				flag = 1;
			}
		}
		x--;
	}
}
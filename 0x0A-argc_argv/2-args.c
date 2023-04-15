#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: function params
 * @argv: function params
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

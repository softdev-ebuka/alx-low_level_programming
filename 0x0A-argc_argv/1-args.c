#include <stdio.h>
/**
 * main - prints the number of arguments that are passed to it
 * @argc: function params
 * @argv: function params
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}

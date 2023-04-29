#include <stdio.h>

/**
 * before_main - print string before main function is executed
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

/**
 * main - mainfunction
 *
 * Return: 0
 */
int main(void)
{
	printf("the main function.\n");
	return (0);
}

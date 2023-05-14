#include "main.h"
#include <unistd.h>

/**
 * _puts - it prints a string then a new line to stdout
 * @str: is pointer to variable to print string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}

/**
 * main - Entry Point
 *
 * @argc: it counts number of parameters which go to main
 * @argv: pointer to array of pointers which has strings entering main
 * Return: 0
 */
int main(int argc, char **argv)
{
	_puts(argv[0]);
	argc = argc;
	return (0);
}

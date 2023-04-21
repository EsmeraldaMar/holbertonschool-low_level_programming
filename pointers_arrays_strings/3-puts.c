#include "main.h"
/**
 * _puts - it prints a string then a new line to stdout
 * @str: is pointer ot variable to print string
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

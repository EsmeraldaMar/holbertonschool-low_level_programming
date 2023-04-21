#include "main.h"
/**
 * print_rev - it prints the string in reverse and a new line
 * @s: is pointer to variable to be printed in reverse
 *
 * description: is prints a string in reverse followed by a new line.
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	i = c - 1;
	while (i >= 0)
	{
		_putchar (s[i]);
		i--;
	}
	_putchar ('\n');
}

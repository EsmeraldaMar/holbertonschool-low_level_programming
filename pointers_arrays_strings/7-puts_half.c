#include "main.h"

/**
 * puts_half - it prints the second half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[n] != '\0')
	{
		if (n > ((i - 1) / 2))
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}

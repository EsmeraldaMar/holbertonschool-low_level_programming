#include "main.h"

/**
 * puts2 - it prints every two character of a string, starting at 0
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

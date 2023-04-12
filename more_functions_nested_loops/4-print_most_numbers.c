#include "main.h"
/**
 * print_most_numbers - it prints number from 0 to 9 but not 2 and 4
 *
 * description: prints number from 0 to 9 but not the numbers 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar (c);
		}
	c++;
	}
_putchar('\n');
}

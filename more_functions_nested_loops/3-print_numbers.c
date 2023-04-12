#include "main.h"
/**
 * print_numbers - it prints numbers from 0 to 9 then a new line
 *
 * description: prints numbers from 0 to 9 then a new restaurant
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}

#include "main.h"
/**
 * print_alphabet - Entry Point
 *
 * description - prints the alphabet in lowercase then a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

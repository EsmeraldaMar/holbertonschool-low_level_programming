#include "main.h"
/**
 * print_line - it prints a straight line in the terminal
 * @n: is an integer data type and number of times character _to be printed
 *
 * description: prints a straight line
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

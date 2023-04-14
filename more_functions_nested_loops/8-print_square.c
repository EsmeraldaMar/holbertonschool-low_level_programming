#include "main.h"
/**
 * print_square - it prints a square then a new line using the #
 * @size: is size of the square to be printed
 *
 * description: print square using # and followed by a new line
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}

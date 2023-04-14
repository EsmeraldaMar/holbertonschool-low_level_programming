#include "main.h"
/**
 * print_triangle - it prints a triangle using #
 *@size: is the size of the triangle
 * description: it prints a triangle using #  then a new line every time
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = size; b - a - 1 > 0; b--)
		{
			_putchar(' ');
		}
		for (b = 0; b < a + 1; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

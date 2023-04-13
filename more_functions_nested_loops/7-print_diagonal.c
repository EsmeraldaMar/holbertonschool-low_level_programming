#include "main.h"
/**
 * print_diagonal - it draws a diagonal line on the terminal
 * @n: is number of times '\' is to be printed
 *
 * description: it draws a diagonal line on terminal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	while (a < n)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}

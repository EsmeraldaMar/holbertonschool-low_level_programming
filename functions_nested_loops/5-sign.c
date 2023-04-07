#include "main.h"
/**
 * print_sign - it prints the sign of a number.
 * @n: is checked and sign is printed and return is given accordingly
 *
 * Return: 1 if the number is greater than zero,
 *  0 if the number is zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}

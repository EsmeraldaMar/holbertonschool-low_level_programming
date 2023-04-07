#include "main.h"
/**
 * print_sign - Entry Point
 * @n: is checked and sign is printed and return is given accordingly
 *
 * description: if n is greater than zero, returns 0, prints + if n is 0,
 * 0 is printed and return is 0 else if n is less than zero, return -1 print -
 *
 * return: 1 or 0 or -1
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

#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @r: number where we print last digit
 *
 * Return: the last number of digit
 */
int print_last_digit(int r)
{
	int c = r % 10;

	if (c < 0)
	{
		c *= -1;
	}
	_putchar (c + 48);
	return (c);
}

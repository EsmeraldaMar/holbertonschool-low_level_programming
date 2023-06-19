#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all numbers
 * @n: number of numbers
 * @...: numbers
 *
 * Return: Sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list number;

	if (n == 0)
		return (0);
	va_start(number, n);
	while (i < n)
	{
		result = result + va_arg(number, int);
		i++;
	}
	va_end(number);
	return (result);
}

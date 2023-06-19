#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: separator
 * @n: number of numbers
 * @...: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list number;

	va_start(number, n);
	while (i < n)
	{
		printf("%d", va_arg(number, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(number);
}

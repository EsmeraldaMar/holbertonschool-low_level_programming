#include "variadic_functions.h"

/**
 * print_strings - it prints strings
 * @separator: separator
 * @n: number of strings passed to function
 * @...: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list string;

	va_start(string, n);
	while (i < n)
	{
		str = va_arg(string, char*);
		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(string);
}

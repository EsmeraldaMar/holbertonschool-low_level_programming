#include "variadic_functions.h"

/**
 * printf_char - Prints a character
 * @box: box to find the character
 * Return: 0
 */
int printf_char(va_list box)
{
	printf("%c", va_arg(box, int));
	return (0);
}
/**
 * printf_int - Prints an integer
 * @box: box to find the integer
 * Return: 0
 */
int printf_int(va_list box)
{
	printf("%d", va_arg(box, int));
	return (0);
}
/**
 * printf_float - Prints a float
 * @box: box to find the float
 * Return: 0
 */
int printf_float(va_list box)
{
	printf("%f", va_arg(box, double));
	return (0);
}

/**
 * printf_string - Prints a string
 * @box: box to find the string
 * Return: 0
 */
int printf_string(va_list box)
{
	char *str;

	str = va_arg(box, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", str);
	return (0);
}

/**
 * print_all - it prints anything
 * @format: list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	va_list box;
	print_t printf_struct[] = {
		{"c", printf_char},
		{"i", printf_int},
		{"f", printf_float},
		{"s", printf_string},
		{NULL, NULL}
	};

	va_start(box, format);
	while (format && format[i])
	{
		while (printf_struct[j].op != NULL)
		{
			if (*printf_struct[j].op == format[i])
			{
				printf("%s", separator);
				printf_struct[j].f(box);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(box);
}

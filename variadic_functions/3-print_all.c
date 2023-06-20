#include "variadic_functions.h"

/**
 * print_all - it prints anything
 * @format: list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *str;
	va_list box;

	va_start(box, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(box, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(box, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(box, double));
				j = 1;
				break;
			case 's':
				str = va_arg(box, char*);
				j = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] && j == 1)
			printf(", ");
		j = 0;
		i++;
	}
	printf("\n");
	va_end(box);
}

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
	char c;
	char *str;
	int integer;
	float f;
	va_list box;

	va_start(box, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(box, int);
				printf("%c", c);
				j = 1;
				break;
			case 'i':
				integer = va_arg(box, int);
				printf("%d", integer);
				j = 1;
				break;
			case 'f':
				f = va_arg(box, double);
				printf("%f", f);
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

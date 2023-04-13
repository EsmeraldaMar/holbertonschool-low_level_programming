#include "main.h"
/**
 * more_numbers - it prints the numbers from 0 to 14 ten times then a new line
 *
 * description: prints the numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar (a / 10 + 48);
			}
			_putchar (a % 10 + 48);
		}
		_putchar ('\n');
	}
}

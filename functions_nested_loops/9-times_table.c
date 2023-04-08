#include "main.h"
/**
 * times_table - it prints the 9 times table starting from 0
 *
 * description: it prints the 9 times table from 0
 */
void times_table(void)
{
	int c;
	int d;
	int e;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			e = c * d;
			if (e > 9)
			{
				_putchar ((e / 10) + 48);
			}
			else if (d != 0)
			{
				_putchar (' ');
			}
			_putchar ((e % 10) + 48);
			if (d != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}

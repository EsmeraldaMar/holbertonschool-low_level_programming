#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - it prints natural nu,bers from n to 98.
 * @n: starting number
 *
 * description: it prints all natural numbers from n to 98.
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}

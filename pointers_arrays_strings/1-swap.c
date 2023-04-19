#include "main.h"
/**
 * swap_int - it swaps the value of two integers
 * @a: it is pointer to the variable of first value
 * @b: it is pointer to the variable of second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

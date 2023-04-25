#include "main.h"
/**
 * reverse_array - it reverses the content in array of integers
 * @a: array to be reversed
 * @n: number of elements in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	i = 0;
	c = n - 1;
	while (i < c)
	{
		int tmp = a[i];

		a[i] = a[c];
		a[c] = tmp;
		i++;
		c--;
	}
}

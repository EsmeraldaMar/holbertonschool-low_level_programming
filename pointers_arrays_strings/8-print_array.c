#include "main.h"
#include <stdio.h>

/**
 * print_array - print all the element of an array
 * @a: array that contains the elements
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf("%s", ", ");
		}
		i++;
	}
	printf("%c", '\n');
}

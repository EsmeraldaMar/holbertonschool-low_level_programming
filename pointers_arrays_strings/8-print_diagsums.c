#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 *
 * @a: pointer to print diagonal from
 * @size: size of pointer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int ldiag = 0;
	int rdiag = 0;

	for (i = 0; i < size; i++)
	{
		rdiag += *(a + (size * i + i));
		ldiag += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", rdiag, ldiag);
}

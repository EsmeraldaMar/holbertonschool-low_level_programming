#include "main.h"

/**
 * set_bit - set a bit at postion
 * @n: number
 * @index: index
 *
 * Return: ! or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (0);
}

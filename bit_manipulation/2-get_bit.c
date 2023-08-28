#include "main.h"

/**
 * get_bit - get the value if bit at index
 * @n: number
 * @index: index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

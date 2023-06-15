#include "function_pointers.h"
/**
 * int_index - it searches for an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer of function to compare values
 * Return: -1 or index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}

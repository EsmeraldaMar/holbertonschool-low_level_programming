#include "search_algos.h"
/**
 * linear_search - searches for value in array of integers
 * using linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index of located value else -1 if array is NULL
 * or if value is absent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

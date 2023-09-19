#include "search_algos.h"
/**
 * binary_search - searches for a val7ue in a sorted array of integers
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in an array
 * @value: value to be searched
 * Return: index of located value else -1 if value is absent or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t middle;
	size_t i;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		i = low;
		while (i <= high)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
		middle = low + (high - low) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (-1);
}

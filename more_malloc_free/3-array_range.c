#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum range of integers stored
 * @max: maximum range of integers stored
 * Return: pointer to the allocated memory
 * if min > max or if malloc fails returns NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i = 0;
	int j;

	if (min > max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * (size + 1));
	if (array == NULL)
		return (NULL);
	j = min;
	while (j < max)
	{
		array[i] = j;
		i++;
		j++;
	}
	return (array);
}


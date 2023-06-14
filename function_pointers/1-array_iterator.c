#include "function_pointers.h"
/**
 * array_iterator - it executes function for eacc parameter in array
 * @array: array of int
 * @size: size of array
 * @action: pointer to function used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}

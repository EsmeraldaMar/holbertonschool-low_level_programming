#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates new memory for an array.
 * @nmemb: number of elements
 * @size: byte size 
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is 0 or if malloc fails returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		new[i] = 0;

	return (new);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- it returns pointer to new allocated memory
 * @b: size of memory
 * Return: 98 if malloc fails else pointer to new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *new;

	new = malloc(b);
	if (new == NULL)
	{
		exit(98);
	}
	return (new);
}

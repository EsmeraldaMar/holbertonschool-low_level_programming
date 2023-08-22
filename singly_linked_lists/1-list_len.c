#include "lists.h"

/**
 * list_len - counts the number of elements
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t counter = h;
	size_t count = 0;

	while (counter != NULL)
	{
		count += 1;
		counter = counter->next;
	}
	return (count);
}

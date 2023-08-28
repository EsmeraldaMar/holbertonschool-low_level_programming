#include "lists.h"

/**
 * listint_len - counts the number of element
 * @h: head of list
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *counter = h;
	size_t count = 0;

	while (counter != NULL)
	{
		count += 1;
		counter = counter->next;
	}
	return (count);
}


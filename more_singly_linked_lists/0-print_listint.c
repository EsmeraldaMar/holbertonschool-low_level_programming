#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: head of list
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *counter = h;
	size_t count = 0;

	while (counter != NULL)
	{
		printf("%d\n", counter->n);
		count += 1;
		counter = counter->next;
	}
	return (count);
}

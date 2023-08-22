#include "lists.h"

/**
 * print_list - it prints all elements of list_t
 * @h: pointer to list
 *
 * if str is NULL print [0] (nil)
 * Return: number of nodes
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	list_t *counter = h;
	size_t count = 0;

	while (counter != NULL)
	{
		if (counter->str != NULL)
			printf("[%d] %s\n", counter->len, counter->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		counter = counter->next;
	}
	return (count);
}

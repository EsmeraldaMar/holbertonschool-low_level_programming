#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freeElement;

	if (head != NULL)
		while (head != NULL)
		{
			freeElement = head;
			head = head->next;
			free(freeElement->str);
			free(freeElement);
		}
}

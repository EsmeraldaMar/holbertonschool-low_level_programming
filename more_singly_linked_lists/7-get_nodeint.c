#include "lists.h"

/**
 * get_nodeint_at_index - return element at index
 * @head: head of list
 * @index: index of element
 *
 * Return: element found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *counter = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				counter = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (counter);
}

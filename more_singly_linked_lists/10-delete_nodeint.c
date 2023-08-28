#include "lists.h"

/**
 * delete_nodeint_at_index - delete element at index
 * @head: head of list
 * #index: index to delete
 *
 * Return: deleted element
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		temp = current;
		current = current->next;
		i++;
	}
	if (!current || i < index)
		return (-1);
	temp->next = current->next;
	free(current);
	return (1);
}

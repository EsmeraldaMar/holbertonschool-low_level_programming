#include "lists.h"

/**
 * insert_nodeint_at_index - insert element at index
 * @head: head of list
 * @idx: index
 * @n: element to add
 *
 * Return: new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	previous->next = new;
	new->next = current;
	return (new);
}

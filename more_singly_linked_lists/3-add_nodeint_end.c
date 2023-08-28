#include "lists.h"

/**
 * add_nodeint_end - add element at the end of list
 * @head: head of list
 * @n: int to add
 *
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *counter = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (counter != NULL)
	{
		while (counter->next != NULL)
			counter = counter->next;
		counter->next = new;
	}
	else
		*head = new;
	return (new);
}

#include "lists.h"

/**
 * add_nodeint - add element at beginning of list
 * @head: beginning to list
 * @n: int to add
 *
 * Return: new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}

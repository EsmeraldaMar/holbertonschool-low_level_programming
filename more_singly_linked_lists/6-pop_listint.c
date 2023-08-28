#include "lists.h"

/**
 * pop_listint - delete head of list
 * @head: head of list
 *
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
		return (0);
	pop = *head;
	n = pop->n;
	free(pop);
	*head = (*head)->next;
	return (n);
}

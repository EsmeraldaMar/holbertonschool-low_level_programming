#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *counter;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			counter = *head;
			free(counter);
			*head = (*head)->next;
		}
		*tmp = NULL;
	}
}	

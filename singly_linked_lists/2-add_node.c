#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 * @head: beginning of the list
 * @str: string to add
 *
 * Return: addredd of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	unsigned int i = 0;

	element = malloc(sizeof(list_t));
	if (element != NULL)
	{
		while (str[i])
			i++;
		element->str = strdup(str);
		element->len = i;
		element->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		element->next = *head;
	*head = element;
	return (element);
}

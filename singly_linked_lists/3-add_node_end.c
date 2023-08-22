#include "lists.h"

/**
 * add_node_end - add element to the end of the list
 * @head: beginning of the list
 * @str: element to add
 *
 * Return: addresse of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;
	list_t *list = *head;
	unsigned int i = 0;

	element = malloc(sizeof(list_t));
	if (element != NULL)
	{
		while (str[i])
			i++;
		element->str = strdup(str);
		element->len = i;
		element->next = NULL;
	}
	else
		return (NULL);
	if (list != NULL)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = element;
	}
	else
		*head = element;
	return (element);
}

#include "main.h"
#include <stdlib.h>
/**
 * _strdup - it returns pointr to new string where string is copied
 * @str: string to duplicate and to point to
 * Return: NULL if string is NULL or if not enough space available,
 * else pointer to copied string
 */
char *_strdup(char *str)
{
	char *newstr;
	int size = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	newstr = malloc(sizeof(char) * (size + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

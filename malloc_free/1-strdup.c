#include "main.h"
#include <stdlib>
/**
 * _strdup: it returns pointr to new string where string is copied
 * @str: string to duplicate and to point to
 * Return: NULL if string is NULL or if not enough space available,
 * else pointer to copied string
 */
char *_strdup(char *str)
{
	char *newstr;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return(NULL);
	}
	for (i = 0
}

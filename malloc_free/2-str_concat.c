#include "main.h"
#include <stdlib.h>
/**
 * str_concat - it concatenates two stirngs and points to
 * new allocated space containing s1 and s2
 * @s1: first string to be concatenated
 * @s2: string to be concatenated to s1
 * Return: if failed returns NULL else pointer to new allocated
 * string in memory which has new concatened string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *constr;
	int size1 = 0;
	int size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	constr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (constr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		constr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		constr[i] = s2[j];
		i++;
		j++;
	}
	constr[i] = '\0';
	return (constr);
}

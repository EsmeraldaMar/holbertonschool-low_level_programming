#include "main.h"
/**
 * _strcmp - it compares two strings
 * @s1: first string to compare
 * @s2: second string to compare to string 1
 *
 * Return: it returns 0 if both stirngs are equal, if s2 is greater than s1
 * it returns negative, if s1 is greater than s2 then it returns positive
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] > s1[i])
	{
		return (s2[i] - s1[i]);
	}
	return (0);
}

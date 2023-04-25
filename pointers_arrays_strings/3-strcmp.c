#include "main.h"
/**
 * _strcmp - it compares two strings
 * @s1: first string to compare
 * @s2: second string to be compared to first string
 *
 * Return: it returns less than 0 if s1 is less than s2, if both
 * are equal returns 0 returns more than 0 is s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	r = 0;
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		r = *s1 - *s2;

	return (r);
}

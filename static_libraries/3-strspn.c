#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: main string
 * @accept: substring
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0' && *s != *a)
		{
			++a;
		}
		if (*a != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
		++s;
	}
	return (count);
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to look into
 * @accept: set of bytes to look for
 *
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	 unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

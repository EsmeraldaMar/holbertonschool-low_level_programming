#include "main.h"
/**
 * _strchr - it locates a character in a string
 * @s: pointer to char
 * @c: character to be found
 *
 * Return: pointer to char *S
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

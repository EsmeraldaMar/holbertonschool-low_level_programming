#include "main.h"
/**
 * _strlen - it gives us the length of a string
 * @s: is a pointer to the variable which we check for length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}

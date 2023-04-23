#include "main.h"

/**
 * _strcpy - Copy the first string into the second one
 * @dest: The string that should receive the copy
 * @src: The string to copy
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

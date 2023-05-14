#include "main.h"
/**
 * _strncat - it concatenates two strings
 * @dest: string to be appended to
 * @src: string to add
 * @n: size of bytes from src
 *
 * Return: a pointer to the resulting added string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

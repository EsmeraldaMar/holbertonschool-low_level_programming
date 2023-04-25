#include "main.h"
/**
 * _strncpy - it copies a string from one destination to another
 * @dest: destination, string is to be copied in
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"
/**
 * _memcpy - it copies the memory area
 * @src: memory area to be copied
 * @dest: memory area destination
 * @n: number of bytes to be copied
 *
 * Return: pointer to memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

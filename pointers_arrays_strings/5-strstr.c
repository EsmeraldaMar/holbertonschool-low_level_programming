#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to locate a substring into a string
 *
 * @haystack: main string to look into
 * @needle: substring to look for
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] != '\0' && haystack[i] != needle[0])
			i++;
		if (haystack[i] == '\0')
			break;
		j = 1;
		while (needle[j] && haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}

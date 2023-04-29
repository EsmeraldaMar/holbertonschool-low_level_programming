#include "main.h"

/**
 * leet - change the string to leet language
 * @s: the string to change to leet language
 *
 * Return: char *
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *c = "oOlLeEaAtT";
	char *l = "01347";

	while (s[i] != '\0')
	{
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = l[j / 2];
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}

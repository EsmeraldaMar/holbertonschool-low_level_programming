#include "main.h"
/**
 * cap_string - capitalise all words of a string
 * @s: string to be capitalised
 *
 * Return: converted string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
		return (s);
}

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
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ','
		|| s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"'
		|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}'
		|| s[i] == '.')
		&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		i++;
	}
	return (s);
}

#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to be changed to uppercase
 *
 * Return: converted string
 */
char *string_toupper(char *s)
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

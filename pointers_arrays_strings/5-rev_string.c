#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: is the pointer to the variable to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i;
	int j;
	int size;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	size = i;

	for (j = 0; j < size / 2; j++)
	{
		i--;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}

#include "main.h"
#include <ctype.h>
/**
 * _islower - entry Point
 *@c: The character that is to be checked
 *
 * description - it checks for lower case letter and returns 1 if true else 0
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

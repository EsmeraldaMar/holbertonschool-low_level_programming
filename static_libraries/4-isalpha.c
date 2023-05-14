#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Entry Point
 *@c: is the character to be checked
 *
 * description - checks  alphabetic character upper or lower, if true 1 else 0
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
}
}

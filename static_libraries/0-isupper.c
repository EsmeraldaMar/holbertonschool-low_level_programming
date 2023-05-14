#include "main.h"
/**
 * _isupper - Entry Point, to check for uppercase letter
 *@c: is the character to check if uppercase
 * description:checks for uppercase letter and returns 1 if uppercase else 0
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

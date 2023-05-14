#include "main.h"
/**
 * _isdigit -  it checks for a digit from 0 to 9
 *@c:what we check if digit is from 0 to 9 and returns 1 if it's digit else 0
 *
 *description: it checks if c is a digit from 0 to 9 if true return 1 else 0
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

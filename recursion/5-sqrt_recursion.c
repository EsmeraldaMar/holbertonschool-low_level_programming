#include "main.h"

/**
 * _sqrt_recursion_loop - function to use to give the natural square root
 *
 * @n: number to return natural square root
 * @i: iterator testing square root
 * Return: int
 */
int _sqrt_recursion_loop(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_loop(n, i + 1));
}

/**
 * _sqrt_recursion - it returns the natural square root of a number.
 * returns -1 if n does not have natural square root
 * @n: number to return natural square root
 *
 * Return: -1 or natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_recursion_loop(n, 1));
}

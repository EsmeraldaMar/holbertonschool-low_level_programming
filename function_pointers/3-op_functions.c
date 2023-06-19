#include "3-calc.h"
/**
 * op_add - adds two integers together
 * @a: first integer
 * @b: second integer to add to a
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers together
 * @a: first integer
 * @b: second integer
 * Return: subtracted number of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers together
 * @a: first integer
 * @b: second integer
 * Return: multiplied number of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers together
 * @a: first integer
 * @b: second integer
 * Return: divided number of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of divided two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of divided number of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}

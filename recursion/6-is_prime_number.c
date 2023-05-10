#include "main.h"

/**
 * is_prime_number_loop - function to calculate if number is a prime number
 *
 * @n: number to check if it is a prime number
 * @i: iterator to check
 * Return: int
 */
int is_prime_number_loop(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_loop(n, i + 1));
}

/**
 * is_prime_number - function to check if the number is a prime number
 *
 * @n: number to check if it is a prime number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 3)
		return (0);
	return (is_prime_number_loop(n, 2));
}

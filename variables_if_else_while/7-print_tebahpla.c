#include <stdio.h>
/**
 * main - Entry Point
 *
 * description - prints lowercase alphabet in reverse using putchar
 *
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar (rev);
	}
	putchar ('\n');
	return (0);
}

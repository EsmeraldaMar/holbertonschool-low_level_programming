#include <stdio.h>
/**
 * main - Entry Point
 *
 * It prints the alphabet in lowercase and uppercase followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char upper;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar (lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar (upper);
	}
	putchar ('\n');
	return (0);
}


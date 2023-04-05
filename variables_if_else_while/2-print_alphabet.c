#include <stdio.h>
/**
 * main - Entry Point
 *
 * It prints the alphabet in lowercase letters from a to z
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}


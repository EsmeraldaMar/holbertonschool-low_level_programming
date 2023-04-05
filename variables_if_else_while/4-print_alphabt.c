#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints alphabet (lowercase letters) except for letter e and q.
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar (letter);
		}
	}
	putchar ('\n');
	return (0);
}

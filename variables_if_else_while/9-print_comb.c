#include <stdio.h>
/**
 * main - Entry Point
 *
 * description - it prints combinations of single numbers in ascending order
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar (a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar ('\n');
	return (0);
}

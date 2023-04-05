#include <stdio.h>
/**
 * main - Entry Point
 *
 * description - prints all numbers of base 16 all in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a;

		for (a = 48; a <= 57; a++)
		{
			putchar (a);
		}
		for (a = 97; a <= 102; a++)
		{
			putchar (a);
		}
		putchar ('\n');
		return (0);
}

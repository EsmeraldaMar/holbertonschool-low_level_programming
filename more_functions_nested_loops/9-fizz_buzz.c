#include <stdio.h>
/**
 * main - Entry Point
 *
 * description: it prints from numbers from 0 to 100,
 * Print Fizz for multiple of 3, print Buzz for multiple of 5
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			if (a > 9)
				printf("%d", a / 10);
			printf("%d", a % 10);
		}
		if (a != 100)
			printf("%c", ' ');
		a++;
	}
	printf("%c", '\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @argc: number of arguments
 * @argv: array fo arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	int result = 0;

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				prinf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		result = result + atoi(argv[i]);
		i++;
		j = 0;
	}
	printf("%d\n", result);
	return (0);
}

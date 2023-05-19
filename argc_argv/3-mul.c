#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @argc: it counts number of parameters which go to main
 * @argv: pointer to array of pointers which has strings entering main
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return(1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}

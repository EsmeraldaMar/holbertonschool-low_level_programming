#include "3-calc.h"

/**
 * main - Print operation
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	int result;
	char *op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	op = argv[2];
	if (strlen(op) != 1)
	{
		puts("Error");
		exit(99);
	}
	if (get_op_func(op) == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = get_op_func(op)(first, second);
	printf("%d\n", result);
	return (0);
}

#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary
 *
 * Return: converted binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b)
	{
		while (*b)
		{
			if (*b == '1')
				num = (num << 1) | 1;
			else if (*b == '0')
				num <<= 1;
			else
				return (0);
			b += 1;
		}
	}
	return (num);
}

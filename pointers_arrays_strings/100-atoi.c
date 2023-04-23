#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to a int and returns it
 *
 * @s: the string to convert to int
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign - 1;
		}
		else if (s[i] == '+')
		{
			sign = sign + 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (result > (2147483640 - s[i] - 48) / 10)
				{
					if (sign >= 0)
					{
						result = INT_MAX;
					}
					else
					{
						result = INT_MIN;
					}
					return (result);
				}
				result = result * 10 + (s[i] - 48);
				i++;
			}
			if (sign < 0)
			{
				result = result * -1;
			}
			return (result);
		}
		i++;
	}
	return (0);
}

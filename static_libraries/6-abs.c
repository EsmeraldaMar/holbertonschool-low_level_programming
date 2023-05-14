#include "main.h"
#include <inttypes.h>
#include <stdlib.h>
/**
 * _abs - it computes the absolute value of an integer
 *@r: is variable to be computed
 * description: it computes the absolute value of an integer
 *
 * Return:absolute value of integer
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}

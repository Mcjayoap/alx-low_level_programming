#include "main.h"

/**
 * _isdigit - that checks for a digit (0 through 9)
 *
 * @c: input
 * Return: Aways O.
 */

int _isdigit(int c)
{
	if ((c >= '0' ) && (c <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return (0);
}

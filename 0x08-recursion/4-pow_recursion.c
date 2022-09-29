#include "main.h"
/**
 * _pow_recursion - returns the value of x**y.
 * @x: interger to find value
 * @y: integer to raise the power
 *
 * Return: -
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x > 0 || x < 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}

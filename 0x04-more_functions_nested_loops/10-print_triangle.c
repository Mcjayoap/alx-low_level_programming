#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: size of the triangle.
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, i;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (i = (size - 1 - a); i > 0; i--)
			{
				_putchar(' ');
			}
			for (b = (a + 1); b > 0; b--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

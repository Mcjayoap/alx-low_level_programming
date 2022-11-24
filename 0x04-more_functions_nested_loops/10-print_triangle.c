#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: size of the triangle.
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

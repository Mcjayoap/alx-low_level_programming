#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}

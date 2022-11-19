#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int line = 0, num, i, j;

	while (line < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			i = num / 10;
			j = num % 10;

			if (num > 10)
			{
				_putchar(i + '0');
			}
			_putchar(j + '0');
		}
		_putchar('\n');
		line++;

	}
}

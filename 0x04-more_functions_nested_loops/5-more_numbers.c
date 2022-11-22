#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int unit, num;

	for (unit = 0; unit < 10; unit++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');

	}
}

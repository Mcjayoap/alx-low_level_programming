#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num != '2') && (num != '4'))
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}

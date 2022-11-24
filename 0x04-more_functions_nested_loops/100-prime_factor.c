#include <stdio.h>

/**
 * print_primeFactor - prints highest prime factor
 *
 * @n: number to find its prime factors
 * Return: void
 */
void print_primeFactor(long int n)
{
	long int div = 2, maxFactor;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxFactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld if the highest prime factor of the number\n", maxFactor);
				break;
			}
		}
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_primeFactor(612852475143);
	return (0);
}

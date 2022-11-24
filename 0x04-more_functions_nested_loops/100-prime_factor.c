#include <stdio.h>
#include <math.h>

/**
 * print_primeFactor - prints highest prime factor
 *
 * @n: number to find its prime factors
 * Return: void
 */
void print_primeFactor(long int n)
{
	int maxFactor;

	for (maxFactor = (int) sqrt (n); maxFactor > 2; maxFactor++)
	{
		if (n % maxFactor == 0)
			{
				printf("%d if the highest prime factor of the number %ld\n", maxFactor, n);
				break;
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

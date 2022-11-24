#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int maxFactor;

	for (maxFactor = (int) sqrt(n); maxFactor > 2; maxFactor++)
	{
		if (n % maxFactor == 0)
		{
			printf("%d if the highest prime factor of the number %ld\n", maxFactor, n);
			break;
		}
	}
	return (0);
}

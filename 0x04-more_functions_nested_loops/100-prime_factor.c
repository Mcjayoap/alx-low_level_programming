#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n =  612852475143;
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
	return (0);
}

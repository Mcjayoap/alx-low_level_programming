#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int c = 2;

	if (c <= n - 1)
	{
		c++;
		if (n % c == 0 || n <= 1)
		{
			return (0);
		}
	}
	if (c == n)
	{
		return (1);
	}
	return (0);
}

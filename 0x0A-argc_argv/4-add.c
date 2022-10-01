#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: number of argunents
 * @argv: array of pointers to arguments
 * Return: 1 if one of the numbers contain non-digit symbol
 * otherwise, return 0
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}

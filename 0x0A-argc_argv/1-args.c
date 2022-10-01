#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

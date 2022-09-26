#include "main.h"
/**
 * _memset - fills the memory with constant bytes
 * @s: string
 * @b: constant byte
 * @n: n bytes to fill
 * Return: Pointer string filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes to be allocated
 *
 * Return: A pointer the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c = (void *)malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}

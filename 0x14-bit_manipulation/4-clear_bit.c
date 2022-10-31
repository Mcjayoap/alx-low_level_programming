#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index.
 * @n: bit pointer
 * @index: index of bit
 * Returns 1 if success, or -1 in error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

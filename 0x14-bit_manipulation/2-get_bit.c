#include "main.h"
/**
 * get_bit - the value of a bit at a given index.
 * @n: the bit 
 * @index: the index of the bit starting from 0
 * Return: value of the bit at index
 *  otherwise, -1 in error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

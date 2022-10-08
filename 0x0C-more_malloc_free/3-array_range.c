#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: first value of the array
 * @max: second value of the array
 *
 * Return: NULL, if min > max, or If malloc fails
 *  Otherwise, the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, init, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (init = 0; init < size; init++)
		array[init] = min++;

	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to be  initialized
 * @c: char to initialize with c
 * Return: NULL if size = 0 or programme fails
 *  othwrwise, return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int init;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (init = 0; init < size; init++)
		array[init] = c;

	return (array);
}

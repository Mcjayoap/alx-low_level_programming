#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for
 *  an array of nmemb elements of size bytes each
 * @nmemb: The number of elements
 * @size: byte size of each array element
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *part;
	char *fil;
	unsigned int init;

	if (nmemb == 0 || size == 0)
		return (NULL);

	part = malloc(size * nmemb);

	if (part == NULL)
		return (NULL);

	fil = part;

	for (init = 0; init < (size * nmemb); init++)
		fil[init]  = '\0';

	return (part);
}


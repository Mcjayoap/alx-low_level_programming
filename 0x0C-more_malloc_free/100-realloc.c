#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: size in byted of the new memory block
 *
 * Return: ptr, if new_size == old_size
 *	NULL, if new_size == 0 and ptr is not NULL
 *	Otherwise, a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	char *ptr_copy, *fil;
	unsigned int init;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);

		if (a == NULL)
			return (NULL);

		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	a = malloc(sizeof(ptr_copy) * new_size);

	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fil = a;

	for (init = 0; init < old_size && init < new_size; init++)
		fil[init] = *ptr_copy++;

	free(ptr);
	return (a);
}

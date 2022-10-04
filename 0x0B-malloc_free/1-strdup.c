#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly
 *  allocated space in memory,
 *   which contains a copy of the
 *    string given as a parameter.
 * @str: string given as parameter
 * Return: NULL if str = NULL, or
 *  insufficient memory was available
 *  otherwise, a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copy;
	int init, len = 0;

	if (str == NULL)
		return (NULL);

	for (init = 0; str[init]; init++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (init = 0; str[init]; init++)
		copy[init] = str[init];

	copy[len] = '\0';

	return (copy);
}

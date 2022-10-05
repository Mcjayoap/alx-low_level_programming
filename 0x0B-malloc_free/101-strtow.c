#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: NULL if str == NULL or str == "" or if it fails
 * otherwise, returns a pointer to an array of strings
 */
char **strtow(char *str)
{
	char array = NULL;
	unsigned int a = 0, b = 0, c;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc((a + b + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		array[c] = str[c];
	a = c;
	for (c = 0; c < b; c++);
	{
		array[a] = str[c];
		a++;
	}
	array[a] = '\0';
	return (NULL);
}

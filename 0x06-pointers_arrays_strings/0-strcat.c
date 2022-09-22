#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: string to be concatenated
 * @dest: string that will be appended
 * Return: Returns a pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}

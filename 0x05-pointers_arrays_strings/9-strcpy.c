#include "main.h"

/**
 * _strcpyn- copy paste string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;
	while (*(src + inc) != '\0')
	{
		*(desk + inc)  =  *(src + inc);
		inc++;
	}
	*(desk + inc) = '\0';

	return (dest);
}
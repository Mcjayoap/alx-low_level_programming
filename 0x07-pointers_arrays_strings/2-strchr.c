#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to locate
 * Return: ppointer to;the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return ('\0');
}

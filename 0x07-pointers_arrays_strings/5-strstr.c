#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: substring
 * @needle: string
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, size = 0;

	while (*(needle + size) != 0)
	{
		size++;
	}

	while (*haystack != 0)
	{
		unsigned int equality = 0;

		for (i = 0; i < size; i++)
		{
			if (*(haystack + i) == (*needle + i))
				equality++
		}
		if (equality == size)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}

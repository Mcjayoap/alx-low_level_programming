#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: substring
 * @needle: string
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (two == '\0')
			return (haystack);

	}
	return (0);
}

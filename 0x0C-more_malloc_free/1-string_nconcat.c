#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 * @n: size to take from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int init, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (init = 0; s1[init]; init++)
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	len = 0;

	for (init = 0; s1[init]; init++)
		a[len++] = s1[init];

	for (init = 0; s2[init] && init < n; init++)
		a[len]++ = s2[init];

	a[len] = '\0';

	return (a);
}

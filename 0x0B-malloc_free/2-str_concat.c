#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: empty if NULL is passed
 *  otherwise return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int init, concat_init = 0, len = 0;

	if (s1 == NULL)
		s1 == "";

	if (s2 == NULL)
		s2 == "";

	for (init = 0; s1[init] || s2[init]; init++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (init = 0; s1[init]; init++)
		concat_str[concat_init++] = s1[init];

	for (init = 0; s2[init]; init++)
		concat_str[concat_init++] = s2[init];

	return (concat_str);
}


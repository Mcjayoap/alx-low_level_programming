#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments passed to the program
 * @a: an array of pointers to the arguments
 * Return: NULL if ac == 0 or av == NULL or fails
 * otherwise, return pointer to a new string
 */
char *argstostr(int ac, char **a)
{
	char *str;
	int arg, byte, init, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg m = 0; marg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	init = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[init++] = av[arg][byte];

		str[init++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

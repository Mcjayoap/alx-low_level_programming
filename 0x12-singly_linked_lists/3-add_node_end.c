#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode, *last;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (*head);
}

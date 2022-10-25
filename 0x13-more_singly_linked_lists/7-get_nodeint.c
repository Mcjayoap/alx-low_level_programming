#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *  of a listint_t linked list.
 * @head: pointer to list
 * @index: the index of the node, starting at 0
 * Return: nth node
 *  else, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

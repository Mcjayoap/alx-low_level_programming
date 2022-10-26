#include "lists.h"
/**
 * insert_nodeint_at_index - a new node at
 *  a given position.
 * @head: pointer tp the newNode
 * @idx: index of the list where the new
 *  node should be added.
 * @n: integer value on newNode
 * Return: address of the new node,
 *  otherwise NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copy = *head;
	unsigned int node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copy;
		*head = newNode;
		return (newNode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}
	newNode->next = copy->next;
	copy->next = newNode;

	return (newNode);
}

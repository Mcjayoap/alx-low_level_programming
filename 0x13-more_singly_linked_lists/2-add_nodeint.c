#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 *  beginning of a listint_t list.
 * @head: beginning of list
 * @n: integer
 * Return: the address of the new element,
 *  otherwise, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 *	of a dlistint_t list
 * @head: head of dlistint_t lis
 * @n: value for the newNode
 * Return: the address of the new element, if true
 *	otherwise, return NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode  == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;

	return (newNode);
}

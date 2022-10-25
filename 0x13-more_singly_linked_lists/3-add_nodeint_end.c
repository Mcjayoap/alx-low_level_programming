#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the
 *  end of a listint_t list.
 * @head: beginning of list.
 * @n: data
 * Return: address of the new element,
 *  otherwise, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}

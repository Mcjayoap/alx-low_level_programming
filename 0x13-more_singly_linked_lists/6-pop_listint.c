#include "lists.h"
/**
 * pop_listint - deletes the head node of
 *  a listint_t linked list
 * @head: poiter to the list
 * Return: n or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int key;

	while (head == NULL)
		return (0);

	key = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (key);
}

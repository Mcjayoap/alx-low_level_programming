#include "lists.h"
/**
 * dlistint_len - prints all the elements of a
 * 	dlistint_t list
 * @h: head of the dlistint_t list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

#include "lists.h"

/**
 * listint_len - returns the number of elements
 *  in a linked listint_t list.
 * @h: list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numElement = 0;

	while (h != NULL)
	{
		numElement++;
		h = h->next;
	}
	return (numElement);
}

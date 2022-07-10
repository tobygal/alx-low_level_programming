#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the pointer to the head
 * Return: returns the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}

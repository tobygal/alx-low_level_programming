#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;
	const dlistint_t *temp;

	temp = h;
	if (temp == NULL)
		return (node);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node++;
	}
	return (node);
}

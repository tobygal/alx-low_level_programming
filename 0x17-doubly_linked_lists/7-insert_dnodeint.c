#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * @idx: the given position
 * @n: data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
		add_dnodeint(h, n);
	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	new->next->prev = new;
	return (new);
}

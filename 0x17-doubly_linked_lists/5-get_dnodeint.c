#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to the list
 * @index: the nth position
 * Return: the nth node of the list or NULL if not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}

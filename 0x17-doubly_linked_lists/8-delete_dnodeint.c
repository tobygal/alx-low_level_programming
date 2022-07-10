#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to the list
 * @index: the given position
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (temp == NULL)
		return (-1);
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
	}

	return (1);
}

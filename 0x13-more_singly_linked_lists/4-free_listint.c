#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	listint_t *current, *old;

	current = head;
	while (current != NULL)
	{
		old = current->next;
		free(current);
		current = old;
	}
}

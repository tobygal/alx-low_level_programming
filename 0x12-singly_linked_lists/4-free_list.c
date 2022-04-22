#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the linked list
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *move;

	ptr = head;

	while (ptr != NULL)
	{
		move = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = move;
	}
}

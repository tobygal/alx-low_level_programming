#include "lists.h"

/**
 * listint_len - traverses a  linked link
 * @h: the linked link
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

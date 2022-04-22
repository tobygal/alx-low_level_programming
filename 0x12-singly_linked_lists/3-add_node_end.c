#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: the linked list
 * @str: the string to be inserted
 * Return: address of the new element if sucessful,
 * NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *ptr, *temp;

	ptr = *head;
	while (ptr && ptr->next != NULL)
		ptr = ptr->next;
	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	temp->len = len;
	temp->next = NULL;
	if (ptr)
		ptr->next = temp;
	else
		*head = temp;
	return (temp);

}

#include "lists.h"

/**
 * add_node - adds a ne node at the beginning of a list
 * @head - the linked list
 * @str: the str to be inserted
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *ptr;

	ptr = (list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);

}

#include"lists.h"
#include<stdlib.h>
/**
 * add_node_end - add's new node at the end
 * @head: is the address of the head pointer
 * @str: the string that will be stored
 * Return: the head pointer or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *tra;
	size_t count = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (str[count])
	{
		count++;
	}
	ptr->str = strdup(str);
	ptr->len = count;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	tra = *head;
	while (tra->next != NULL)
	{
		tra = tra->next;
	}
	tra->next = ptr;
	return (*head);
}

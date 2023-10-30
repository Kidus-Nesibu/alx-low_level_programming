#include"lists.h"
#include<stdlib.h>
/**
 * add_node - add node to the begining
 * @head: pointer to head pointer
 * @str: the data that should be in the node
 * Return: head pointer or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	size_t i = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

#include"lists.h"
/**
 * add_dnodeint_end - add node at the end of the linked list
 * @head: head of the linked list
 * @n: data that is stored in the linked list
 * Return: the new allocated pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *ptr;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	tmp->prev = ptr;

	return (tmp);
}

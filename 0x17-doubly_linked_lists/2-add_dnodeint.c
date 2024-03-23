#include"lists.h"
/**
 * add_dnodeint - add node at head of doubly linked list
 * @head: head of the doubly linked list
 * @n: the data that is supposed to be stored
 * Return: the newly allocated node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}

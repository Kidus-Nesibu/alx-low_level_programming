#include"lists.h"
/**
 * free_dlistint - frees the allocated memory for the nodes
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}

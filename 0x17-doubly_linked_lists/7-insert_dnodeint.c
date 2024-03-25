#include"lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	
	tmp = *h;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (tmp != NULL && idx - 1 > 0)
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx != 1)
		return (NULL);
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}

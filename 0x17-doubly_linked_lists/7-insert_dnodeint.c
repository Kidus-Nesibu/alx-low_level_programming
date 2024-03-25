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
	while (tmp != NULL && idx - 1 > 0)
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx - 1 != 0)
		return (NULL);
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}

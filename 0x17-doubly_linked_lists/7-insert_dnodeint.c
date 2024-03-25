#include"lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if(idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
		{
			new->prev = *h;
		}
		*h = new;
		return (new);
	}

	while (tmp != NULL)
	{
		if (i == idx)
		{
			new->next = tmp;
			tmp->prev->next = new;
			new->prev = tmp->prev;
			tmp->prev = new;

			return (new);
		}
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	return (NULL);
}

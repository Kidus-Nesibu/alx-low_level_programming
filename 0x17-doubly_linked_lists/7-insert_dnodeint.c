#include"lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	int count = 0;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	tmp = *h;
	if (idx == 0)
	{
        	if (*h != NULL) 
		{
            		new_node->next = *h;
            		(*h)->prev = new_node;
        	}
        	*h = new_node;
	}
        return new_node;
    }
	while (count < idx)
	{
		count++;
		tmp = tmp->next;
	}
	if (count != idx)
		return (NULL);

	tmp->prev = new_node;
	tmp = new_node;
	new_node->prev = tmp;

	return (new_node);
}

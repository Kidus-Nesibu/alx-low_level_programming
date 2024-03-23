#include"lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (count < index)
	{
		count++;
		tmp = tmp->next;
	}

	if (count == index)
	{
		return (tmp);
	}
	else 
	{
		return (NULL);
	}

}

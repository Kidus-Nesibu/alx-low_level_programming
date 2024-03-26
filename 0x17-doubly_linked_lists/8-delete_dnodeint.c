#include"lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *ptr;
	size_t i = 1;
	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		tmp = (*head)->next;
		tmp->prev = NULL;
		free(*head);
		*head = NULL;
		*head = tmp;
		return (1);
	}

	while (tmp->next != NULL)
	{
		if (i == index)
		{
			ptr = tmp->prev;
			ptr->next = tmp->next;
			tmp->next->prev = ptr;
			free(tmp);
			tmp = NULL;
			return (1);
		}
		tmp = tmp->next;
		i++;
	}	
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		tmp = NULL;
		return (1);
	}

}

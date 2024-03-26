#include"lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *ptr;
	size_t i = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		if(tmp->next == NULL)
		{
			free(tmp);
			tmp = NULL;
		}
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		tmp = NULL;
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
		if (tmp->prev->next != NULL)
			tmp->prev->next = NULL;
		else
			*head = NULL;
		free(tmp);
		tmp = NULL;
		return (1);
	}
	return (1);
}

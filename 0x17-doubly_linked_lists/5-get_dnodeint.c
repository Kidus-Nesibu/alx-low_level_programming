#include"lists.h"
/**
 * get_dnodeint_at_index - gives the data that is at a particular index
 * @head: head of the linked list
 * @index: the exact place of the data
 * Return: NULL if there is any faliure or the particular index at palce
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (count < index)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
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

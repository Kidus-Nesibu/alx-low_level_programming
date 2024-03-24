#include"lists.h"
/**
 * sum_dlistint -  calculates the sum of the data in the linked list
 * @head: the head of the linked list
 * Return: the sum of the data in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

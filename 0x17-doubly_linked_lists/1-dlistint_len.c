#include"lists.h"
/**
 * dlistint_len - counts the number of data in linked list
 * @h: the head of the linked list
 * Return: the length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

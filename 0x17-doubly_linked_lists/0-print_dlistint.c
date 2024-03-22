#include"lists.h"
/**
 * print_dlistint - print elements of linked list
 * @h: head of the liked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}

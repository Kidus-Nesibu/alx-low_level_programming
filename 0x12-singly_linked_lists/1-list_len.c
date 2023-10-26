#include"lists.h"

/**
 * list_len - count nodes
 * @h: head pointer
 * Return: count
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

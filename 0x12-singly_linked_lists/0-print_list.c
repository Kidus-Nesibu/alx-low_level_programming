#include"lists.h"
/**
 * print_list - count and print nodes
 * @h: struct header
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u]%s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}

#include"lists.h"
#include<stdio.h>

/**
 * print_list - print nodes
 * @h: head pointer
 * Return: count
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

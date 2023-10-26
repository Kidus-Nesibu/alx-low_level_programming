#include"lists.h"
#include<stdio.h>

/**
 * print_list - print elements of linked list
 * @h: pointer to list
 * Return: int
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;
	}
	return (i);
}

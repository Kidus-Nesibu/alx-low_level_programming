#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_list - prints nodes
 * @h: is the head node
 * Return: i
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *ptr;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%u]%s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u]%s\n", ptr->len, ptr->str);
		}
		i++;
		ptr = ptr->next;
	}
	return (i);
}


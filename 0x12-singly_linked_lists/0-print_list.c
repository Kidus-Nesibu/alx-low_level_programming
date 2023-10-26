#include"lists.h"
#include<stdio.h>
/**
 * print_list - prints the list
 * @h: is the head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *hold;

	hold = h;
	while (hold)
	{
		if (hold->str == NULL)
		{
			printf("[%u]%s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u]%s\n", hold->len, hold->str);
		}
		i++;
		hold = hold->next;
	}
	return (i);
}

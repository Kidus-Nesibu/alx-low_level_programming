#include"lists.h"
/**
 * print_list - count and print nodes
 * @h: struct header
 * Return: count
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *hold;

	while (h != NULL)
	{
		hold = h;

		if (hold->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u]%s\n", hold->len, hold->str);
			count++;
		}
		hold = hold->next;
	}
	return (count);
}
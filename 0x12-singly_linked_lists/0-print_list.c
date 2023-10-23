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

	hold = h;

	while (hold != NULL)
	{

		if (hold->str == NULL)
		{
			printf("[%u]%s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u]%s\n", hold->len, hold->str);
		}
		count++;
		hold = hold->next;
	}
	return (count);
}

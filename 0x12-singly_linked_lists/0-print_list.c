#include"lists.h"
/**
 * print_list - prints the list
 * @h: is the head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *hold;

	hold = h;
	i = 0;
	while (hold != NULL)
	{
		if (hold->str == NULL)
		{
			printf("[0] (nil)\n");
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

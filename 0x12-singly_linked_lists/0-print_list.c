#include"lists.h"
/**
 * print_list - prints the list
 * @h: is the head pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]%s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}

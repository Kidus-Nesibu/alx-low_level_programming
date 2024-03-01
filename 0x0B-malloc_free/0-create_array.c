#include"main.h"
#include<stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

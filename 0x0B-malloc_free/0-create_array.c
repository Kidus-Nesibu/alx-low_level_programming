#include"main.h"
#include<stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr[0] = c;
	return (ptr);
}

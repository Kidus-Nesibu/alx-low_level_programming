#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates array by allocation memory form the heap
 * @size: the size of the allocated memory from the heap
 * @c: the charachter that initialze the char array
 * Return: the allocated array ptr or NULL if size is 0 of memo alloc fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * size);
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

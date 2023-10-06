#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates array
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer to dynamic memo
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}


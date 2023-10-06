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

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	p[size] = c;
	return (p);
}


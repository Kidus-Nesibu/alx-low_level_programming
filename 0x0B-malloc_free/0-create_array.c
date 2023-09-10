#include<stdlib.h>
#include"main.h"
/**
 * create_array - create array of character
 * @size: unsigned integer
 * @c: character variable
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*array = c;

	}
	return (array);
}

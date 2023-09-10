#include"main.h"
#include<stdlib.h>
/**
 *create_array - creates an array
 *@size: size of the array
 *@c: array item
 *Return: array if sucsess
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*array = 'c';
	}
	return (array);
}

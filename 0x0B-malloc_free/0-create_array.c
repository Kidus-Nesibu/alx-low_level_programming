#include<stdlib.h>
#include"main.h"
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(sizeof(char) *size);
	int i;
	
	for (i=0;i<size;i++)
	{
		*array = c;
	}
	return (array);
}

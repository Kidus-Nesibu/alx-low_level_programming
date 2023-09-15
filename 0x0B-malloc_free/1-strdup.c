#include"main.h"
#include<stdlib.h>
/**
 * _strdup - allocates a memory for and copies it there
 * Return: ptr if sucess
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *ptr;

	for (length = 0; str[length] != '\0'; length++)
	ptr = malloc(sizeof(char) * length);
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	free(ptr);
	return (ptr);
}

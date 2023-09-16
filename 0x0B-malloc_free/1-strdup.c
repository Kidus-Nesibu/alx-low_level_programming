#include"main.h"
#include<stdlib.h>
/**
 * _strdup - allocates a memory for and copies it there
 * @str: a pointer that stor a copy of string literal
 * Return: ptr if sucess
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[length] != '\0'; i++)
	{
		;
	}
	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

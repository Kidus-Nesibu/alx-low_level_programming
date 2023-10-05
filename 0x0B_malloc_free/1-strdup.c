#include"main.h"
#include<stdlib.h>
/**
 * _strdup - copies to dynamic memory
 * @str: string parameter
 * Return: pointer to dynamic memo
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;

	char *p;

	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

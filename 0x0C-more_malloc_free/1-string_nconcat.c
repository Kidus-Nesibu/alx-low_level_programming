#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatnates string
 * @s1: string 1
 * @s2: string 2
 * @n: number of string to be copied
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *p;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	else
	{
		len1 = 0;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}
	else
	{
		len2 = 0;
	}
	p = malloc(sizeof(char) * (len1 + (n >= len2 ? len2 : n) + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < (n >= len2 ? len2 : n); i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + i] = '\0';
	return (p);
}

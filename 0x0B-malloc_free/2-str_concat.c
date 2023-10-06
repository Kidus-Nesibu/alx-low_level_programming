#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatnates
 * @s1:	 parameter 1
 * @s2: parameter 2
 * Return: base address dyamic memo
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	len2++;
	p = malloc(sizeof(char) * (len1 + len2));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + len2 - 1] = '\0';
	return (p);
}

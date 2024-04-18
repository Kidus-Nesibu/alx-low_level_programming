#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches string any of a set of bytes
 * @s: first string
 * @accept: the second string
 *
 * Return: the occurence of the string
 */
char *_strpbrk(char *s, char *accept)
{
	int len = 0, len2 = 0, i, j;

	while (s[len] != '\0')
		len++;
	while (accept[len2] != '\0')
		len2++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			return (&s[i]);

	}
	return (NULL);
}

#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character
 * @s: source string
 * @c: the character
 *
 * Return: the address of the first occurence
 */
char *_strchr(char *s, char c)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0, < 0 or > 0
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0, len2 = 0, i, value = 0;

	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;
	for (i = 0; i < len + len2; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] != s2[i])
		{
			value = (s1[i] + 48) - (s2[i] + 48);
			break;
		}

	}
	return (value);
}

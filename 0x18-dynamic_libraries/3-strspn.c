#include "main.h"

/**
 * _strspn - lenght of prefix substring
 * @s: first string
 * @accept: second string
 *
 * Return: counted number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, len2 = 0;

	while (s[len] != '\0')
		len++;
	while (s[len2] != '\0')
		len2++;
	for (i = 0; i < len; i++)
	{

		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (j == len2)
			break;
	}
	return (i);
}

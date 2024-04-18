#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string one
 * @needle: second string
 *
 * Return: Adress of the substring in string one
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, address;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				address = j;
				while ((needle[i] == haystack[j]) && (needle[i] != '\0'
							&& haystack[j] != '\0'))
				{
					i++;
					j++;
				}
				if (needle[i] == '\0')
					return (&haystack[address]);
				if (needle[i] != haystack[j] && needle[i] != '\0' && haystack[j] != '\0')
				{
					i = 0;
					continue;
				}
			}
			if (i == 0 && haystack[j] == '\0')
				return (NULL);
		}
	}
	return (NULL);
}



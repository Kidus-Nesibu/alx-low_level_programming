#include"main.h"
/**
 * _strcat - concatnates two strings
 * @dest: string 1
 * @src: string 2
 * Return: the concatnated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


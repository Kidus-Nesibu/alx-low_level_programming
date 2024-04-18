#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: Source String
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}

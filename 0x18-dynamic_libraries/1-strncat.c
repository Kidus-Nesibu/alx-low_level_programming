#include "main.h"

/**
 * _strncat - concatentes two strings with n number
 * @dest: destination string
 * @src: sources string
 * @n: number of elements of the string
 * Return: Address of dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}

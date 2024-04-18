#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string
 *@dest: destination string
 *@src: source string
 *
 * Return: Address of new string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

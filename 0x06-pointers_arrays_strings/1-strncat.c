#include"main.h"
/**
 * _strncat - concatnate string upto n
 * @dest: string1
 * @src: string2
 * @n: number of string to be concatnated
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i + j] = src[j];
		i++;
		j++;
	}

	return (dest);
}

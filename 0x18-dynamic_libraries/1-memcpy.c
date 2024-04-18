#include "main.h"

/**
 * _memcpy - copies n byte
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to be copied
 *
 * Return: address of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

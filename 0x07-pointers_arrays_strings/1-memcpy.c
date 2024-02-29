#include"main.h"
/**
 * _memcpy - copys memory form sorce to destination
 * @dest: char pointer that holds the copied memory
 * @src: char pointer that holds memory address
 * @n: unsigned int
 * Return: dest the char pointer which hold memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

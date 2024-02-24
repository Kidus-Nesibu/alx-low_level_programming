#include"main.h"
/**
 * _strcpy - copies the string in src to dest
 * @dest: empty char pointer
 * @src: char pointer that contains the string
 * Return: dest the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

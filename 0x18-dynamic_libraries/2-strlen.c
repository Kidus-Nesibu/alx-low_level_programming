#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: accepts the string
 *
 * Return: lenght in integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

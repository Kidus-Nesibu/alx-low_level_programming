#include"main.h"
/**
 * _strlen - counts the string length
 * @s: the string provide
 * Return: the lengthe of the stirng s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

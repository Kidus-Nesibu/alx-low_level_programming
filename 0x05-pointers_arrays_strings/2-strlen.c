#include"main.h"
/**
 * _strlen - counts the string length
 * @s: the string provide
 */
int _strlen(char *s)
{
	int i = 0;

	while(*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

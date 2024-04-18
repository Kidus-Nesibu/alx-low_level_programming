#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory pointed by s
 * @b: character b
 * @n: n amount of byte
 *
 * Return: character of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

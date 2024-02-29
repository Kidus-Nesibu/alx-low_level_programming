#include"main.h"
/**
 * _memset - fills the pointer with constant byte
 * @s: char pointer
 * @b: constant byte
 * @n: unsigned int
 * Return: s which holds the constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

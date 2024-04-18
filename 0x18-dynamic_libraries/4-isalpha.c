#include <stdlib.h>
#include <stdio.h>

/**
 * _isalpha - checks wether it is alpahbertic
 *@c: recievs the character
 * Return: 1 if alpahbet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

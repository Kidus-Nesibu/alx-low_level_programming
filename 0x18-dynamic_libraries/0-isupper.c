#include "main.h"

/**
 * _isupper - checks for uppercase
 *@c: character passed
 *
 *Return: the character
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}

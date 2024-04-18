#include <stdlib.h>
#include <stdio.h>

/**
 * _islower - checks wether input is uppercase or lower
 *
 * @c: recives the character as an int
 * Return: an integer value
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}

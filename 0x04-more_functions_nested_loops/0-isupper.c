#include"main.h"
/**
 * _isupper - check if the alphabet is uppercase or not
 * @c: is the alphabet that is going to be checked
 * Return: 1 if c is uppercase 0 if c is lowercase or else
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

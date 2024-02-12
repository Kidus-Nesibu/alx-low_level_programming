#include"main.h"
/**
 * _isdigit - check if c is from 0 to 9
 * @c: the argument to be checked
 * Return: 1 it the numetr is 0 or 9 0 if it is other number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

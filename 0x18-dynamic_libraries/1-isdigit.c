#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the digit to be checked
 *
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

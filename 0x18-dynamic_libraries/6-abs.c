#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value
 *@n: the number to be checked
 * Return: 1 if sucessful
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}

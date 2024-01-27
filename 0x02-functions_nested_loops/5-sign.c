#include"main.h"
/**
 * print_sign - print the sign of the given integer
 * @n: given integer
 * Return: 0 if n is 0 1 if n is postive -1 if n is negative
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


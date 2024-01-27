#include"main.h"
/**
 * print_last_digit - print last digit of the given argument
 * @n: the given argument
 * Return: the last digit of n
 **/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}


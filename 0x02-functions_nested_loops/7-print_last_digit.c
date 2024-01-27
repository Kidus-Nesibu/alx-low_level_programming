#include"main.h"
/**
 * print_last_digit - print last digit of the given argument
 * @n: the given argument
 * Return: the last digit of n
 **/
int print_last_digit(int n)
{
	int L;

	if (n < 0)
	{
		L = (n % 10) * -1;
		_putchar(n + '0');
	}
	else
	{
		L = n % 10;
		_putchar(n + '0');
	}
	return (L);
}


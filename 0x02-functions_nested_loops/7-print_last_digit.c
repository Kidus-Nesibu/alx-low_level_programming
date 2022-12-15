#include "main.h"
/**
 * print_last_digit  - prints last digit of a number
 * @n: is the int that will use for ther argument of the function
 * Return: integer value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 10)
		last = last * -1;
	_putchar(last + '0');
	_putchar('\n');
	return (last);
}

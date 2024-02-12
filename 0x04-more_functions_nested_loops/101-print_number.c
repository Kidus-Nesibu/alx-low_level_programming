#include"main.h"
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}

	if (n > 9 && n < 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 99 && n < 999)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) + '0');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
#include"main.h"
/**
 * print_line - prints line
 * @n: determines the length of the line tobe printed
 */
void print_line(int n)
{
	int i = 1;

	if (n < 0 || n == 0)
	{
		_putchar(10);
	}
	while (i <= n)
	{
		_putchar('_');
		if (i == n)
		{
			_putchar(10);
			break;
		}
		i++;
	}
}

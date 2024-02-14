#include"main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: the numbers of backlash used
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}

	int i = 1, j;
	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar(10);
			break;
		}
		j = 1;

		while (j <= n)
		{
			if (i == j)
			{
				_putchar(92);
			}
			else if (i > j)
			{
				_putchar(' ');
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}

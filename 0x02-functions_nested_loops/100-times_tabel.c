#include"main.h"
#include <stdio.h>
/**
 * print_times_table - Print multiplication table up to n
 * @n: The number up to which the multiplication table is print
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				print(mult);

				if (j != n)
				{
					_putchar(',');
					if (mult > 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (mult > 99)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}

void print(int mult)
{
	if (mult > 9)
	{
		int first, last;

		last = mult % 10;
		first = mult / 10;

		_putchar(first + '0');
		_putchar(last + '0');
	}
		else if (mult > 99)
		{
			int first, second, last;

			first = mult / 100;
			second = ((mult % 100) / 10);
			last = mult % 10;

			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(last + '0');
		}
	else
	{
		_putchar(mult + '0');
	}
}


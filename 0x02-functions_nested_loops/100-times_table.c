#include"main.h"
/**
 * print_times_table - print n times table
 * @n: the given number to print the times table
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, mult;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;

				if (mult <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					ones(mult);
				}
				else if (mult > 9 && mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					tens(mult);
				}
				else if (mult >= 100)
				{
					_putchar(' ');
					hundreds(mult);
				}

				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar(10);
		}
	}
}
/**
 * tens - print the tens place of mult
 * @mult: the given number
 */
void tens(int mult)
{
	int first, last;

	last = mult % 10;
	first = mult / 10;

	_putchar(first + '0');
	_putchar(last + '0');
}
/**
 * hundreds - print the hundred place of mult
 * @mult: the given number
 */
void hundreds(int mult)
{
	int first, second, last;

	last = mult % 10;
	second = (mult % 100) / 10;
	first = mult / 100;

	_putchar(first + '0');
	_putchar(second + '0');
	_putchar(last + '0');
}
/**
 * ones - print the ones place of mult
 * @mult: the given number
 */
void ones(int mult)
{
	int last;

	last = mult % 10;

	_putchar(last + '0');
}

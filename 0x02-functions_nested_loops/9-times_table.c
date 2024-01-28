#include"main.h"
void times_table(void)
{
	int i, j, n, last, first;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (n > 9)
			{
				last = n % 10;
				first = n / 10;

				_putchar(first + '0');
				_putchar(last + '0');
				if (n != 81)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(n + '0');
				if (n != 81)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar(10);
	}
}

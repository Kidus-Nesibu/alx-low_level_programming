#include"main.h"
void print_times_table(int n)
{
	int i, j;
	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				
				if (i != 0)
				{
					_putchar(' ');
				}
				_putchar(mult + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar(10);
		}
	}
}

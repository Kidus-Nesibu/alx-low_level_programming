#include"main.h"
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}

	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar(10);
			break;
		}
		int j = 1;

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

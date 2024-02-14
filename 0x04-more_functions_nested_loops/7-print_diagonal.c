#include "main.h"

/**
 * print_diagonal - prints a line in diagons
 * @n: the number of itme sit should be printed
 *
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n < 0 || n == 0)
		_putchar('\n');

	while (i <=  n)
	{
		j = 1;

		while (j <= n)
		{
			if (i == j)
				_putchar(92);
			else if (i > j)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}

}

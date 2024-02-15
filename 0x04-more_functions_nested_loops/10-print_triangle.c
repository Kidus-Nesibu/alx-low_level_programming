#include"main.h"
/**
 * print_triangle - prints triangle using #
 * @size: the size of the triangle to be printed
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}

	i = 1;

	while (i <= size)
	{
		j = 1;

		while (j <= size)
		{
			if (i + j <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}

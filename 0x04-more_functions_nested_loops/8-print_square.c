#include"main.h"
/**
 * print_square - prints square
 * @size: tell us the size of the square
 */
void print_square(int size)
{
	int i = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	while (i <= size)
	{
		int j = 1;

		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar(10);
		i++;
	}
}

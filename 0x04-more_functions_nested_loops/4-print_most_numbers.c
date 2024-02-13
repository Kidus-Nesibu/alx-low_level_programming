#include"main.h"
/**
 * print_most_numbers - print 1 upto 9
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i != 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		else
		{
			;
		}
		i++;
	}
	_putchar(10);
}

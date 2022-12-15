#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

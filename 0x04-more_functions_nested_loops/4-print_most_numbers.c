#include"main.h"
/**
 * print_most_numbers - prints numbers except 2 && 4
 * Return: 0;
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar(i + '0');
		i++;
	else if (i == 2)
		_putchar(i + '0');
		i++;
	else if (i == 4)
		_putchar(i + '0');
		i++;
}

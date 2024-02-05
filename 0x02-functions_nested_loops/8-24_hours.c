#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - prints 24 hours
 */
void jack_bauer(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			print(i, j);
		}
	}
}
/**
 * print - prints the number using _putchar function
 * @i: the first loop counter
 * @j: the second loop counter
 */
void print(int i, int j)
{
	if (i < 10 && j < 10)
	{
		_putchar(0 + '0');
		_putchar(i + '0');
		_putchar(':');
		_putchar(0 + '0');
		_putchar(j + '0');
		_putchar(10);
	}
	else if (i < 10)
	{
		_putchar(0 + '0');
		_putchar(i + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar(10);
	}
	else if (j < 10)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar(0 + '0');
		_putchar(j + '0');
		_putchar(10);
	}
	else
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar(10);
	}
}

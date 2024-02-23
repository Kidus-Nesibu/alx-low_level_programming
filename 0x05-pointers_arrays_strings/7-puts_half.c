#include"main.h"
void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;

		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (len - 1) / 2;

		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar(10);
}

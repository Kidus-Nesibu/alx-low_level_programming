#include"main.h"
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	i = half;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

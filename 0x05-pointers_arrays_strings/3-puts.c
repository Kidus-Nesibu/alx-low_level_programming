#include"main.h"
/**
 * _puts - displays the char until the sting is null
 * @str: the string given
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

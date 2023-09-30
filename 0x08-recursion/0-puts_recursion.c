#include"main.h"
/**
 * _puts_recursion - prints string recursively
 * @s: a string parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

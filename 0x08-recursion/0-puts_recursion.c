#include"main.h"
/**
 * main - prints string recursively
 * @s: a string parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}

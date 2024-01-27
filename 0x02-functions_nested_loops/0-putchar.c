#include"main.h"
#include<stdio.h>
/**
 * main - prints _putchar to the standard out put
 * Return: 0 if the program runs succesfully
 **/
int main(void)
{
	char *str;

	str = "_putchar";

	while(str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);

	return (0);
}

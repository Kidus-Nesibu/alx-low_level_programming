#include "main.h"
/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
	return (0);
}

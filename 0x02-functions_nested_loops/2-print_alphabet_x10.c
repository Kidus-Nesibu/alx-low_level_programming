#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x = 1;
	char A;

	while (x <= 10)
	{
		A = 'a';

		while (A <= 'z')
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
		i++;
	}

}

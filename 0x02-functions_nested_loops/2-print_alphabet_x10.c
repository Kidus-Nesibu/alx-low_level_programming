#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char A = 'a';

		while (A <= 'a')
		{
			putchar(A);
			A++;
		}
		putchar('\n');
	}

}

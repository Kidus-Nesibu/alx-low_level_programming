#include <stdio.h>
/**
 * main - Entry
 * Return: Always
 */
int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}

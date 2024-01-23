#include <stdio.h>
/**
 * main - prints lower case alphabets
 * Return: 0 if the program runs succes fully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}

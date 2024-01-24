#include<stdio.h>
/**
 * main - displays lower case alphabet in reverse order
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}

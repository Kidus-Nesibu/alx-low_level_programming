#include<stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			++c;
		}
		else
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}

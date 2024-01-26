#include<stdio.h>
/**
 * main - prints alphabet in small and capital letter
 * Return: 0 if the run succesfully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}

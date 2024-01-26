#include<stdio.h>
/**
 * main - prints possible commbination of numbers
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}

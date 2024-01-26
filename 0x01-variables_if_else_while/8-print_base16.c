#include<stdio.h>
/**
 * main - prints hexa decimal values
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
	}
	putchar(10);
	return (0);
}

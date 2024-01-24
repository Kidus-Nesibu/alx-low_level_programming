#include<stdio.h>
/**
 * main - prints possible commbination of two numbers
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}

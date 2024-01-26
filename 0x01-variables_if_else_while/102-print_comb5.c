#include <stdio.h>
/**
 * main - prints two two combination of numbers
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');

			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}


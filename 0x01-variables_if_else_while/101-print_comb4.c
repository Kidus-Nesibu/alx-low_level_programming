#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				putchar(j);
				if (i == 55 && n == 56 && j == 57)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
	putchar('\n');
}

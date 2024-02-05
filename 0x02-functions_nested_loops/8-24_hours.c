#include"main.h"
#include<stdio.h>
void jack_bauer(void)
{
	int i = 0, j = 0;
	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10 && j < 10)
			{
				putchar(0 + '0');
				putchar(i + '0');
				putchar(':');
				putchar(0 + '0');
				putchar(j + '0');
				putchar(10);
			}
			else if (i < 10)
			{
				putchar(0 + '0');
				putchar(i + '0');
				putchar(':');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(10);
			}
			else if (j < 10)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(':');
				putchar(0 + '0');
				putchar(j + '0');
				putchar(10);
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(':');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(10);
			}

		}
}

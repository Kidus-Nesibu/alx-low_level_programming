#include"main.h"
#include<stdio.h>
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for(i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		_putchar(10);
	}
	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			printf("-%d, ", i);
		}
		else
		{
			printf("%d, ", i);
		}
	}
	_putchar(10);
}

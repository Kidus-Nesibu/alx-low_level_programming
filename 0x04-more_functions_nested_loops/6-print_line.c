#include"main.h"
void print_line(int n)
{
	int i = 1;
	
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}

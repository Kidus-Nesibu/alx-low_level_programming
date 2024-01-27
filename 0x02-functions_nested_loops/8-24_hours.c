#include"main.h"
/**
 * jack_bauer - prints 24 hours with the min and sec
 **/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 9)
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar(10);
				}
			}
		}
	}
}

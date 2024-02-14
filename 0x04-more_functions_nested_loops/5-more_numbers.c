#include"main.h"
/**
 * more_numbers - print 1 upto 10 14 times
 */
void more_numbers(void)
{
	int i = 1;

	while (i != 11)
	{
		int k = 0;

		while (k <= 1)
		{
			int j = 0;

			while (j <= 9)
			{
				if (k == 1)
				{
					_putchar(k + '0');
				}
				_putchar(j + '0');
				if (j == 4 && k == 1)
				{
					break;
				}
				j++;
			}
			k++;
		}
		_putchar(10);
		i++;
	}
}


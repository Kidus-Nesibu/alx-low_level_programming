#include<stdio.h>
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && j != k && i < j && j < k)
                       		 {
                                	putchar(i + '0');
                                	putchar(j + '0');
					putchar(k + '0');
                                	if (j != 9 || i != 9 || k != 9)
                                	{
                                        	putchar(',');
                                        	putchar(' ');
                                	}
                        	}

			}
		}
	}
	putchar(10);
	return (0);
}

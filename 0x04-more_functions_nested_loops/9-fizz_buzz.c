#include"main.h"
#include<stdio.h>
int main(void)
{
	int i = 1;

	while (i != 101)
	{
		if (i % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ");
		}
		else
		{
			printf("%d", i);
		}
		if (i <  100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

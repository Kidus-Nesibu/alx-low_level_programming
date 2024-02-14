#include"main.h"
#include<stdio.h>
/**
 * main - print 1 upto 100
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int i = 1;

	while (i != 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FIZZBUZZ");
		}
		else if (i % 3 == 0)
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
	return (10);
}

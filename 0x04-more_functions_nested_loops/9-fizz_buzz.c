#include<stdio.h>
#include"main.h"
/**
 * main - print 1 upto 100
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
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

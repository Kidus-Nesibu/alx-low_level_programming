#include"main.h"
#include<stdio.h>
/**
 * main - prints the sum of multiples of 3 and 5
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

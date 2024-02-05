#include"main.h"
#include<stdio.h>
/**
 * main - print the sum of even fibonacci
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	int num1 = 1, num2 = 2, num3 = 0, sum = 2;

	while (num3 <= 4000000)
	{
		if (num3 % 2 == 0)
			sum += num3;
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	printf("%d\n", sum);
	return (0);
}

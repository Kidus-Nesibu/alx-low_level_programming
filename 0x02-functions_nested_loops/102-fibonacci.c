#include"main.h"
#include<stdio.h>
/**
 * main - prints the first 50 fibonacci sequence
 * Return: 0 if the program is succesfull
 */
int main(void)
{
	long double num1 = 1, num2 = 2, num3 = 0;
	int i = 0;

	while (i < 48)
	{
		if (i == 0)
		{
			printf("%.Lf, %.Lf, ", num1, num3);
		}
		num3 = num1 + num2;
		if (i == 47)
		{
			printf("%.Lf", num3);
			break;
		}
		printf("%.Lf, ", num3);
		num1 = num2;
		num2 = num3;
		i++;
	}
	printf("\n");
	return (0);
}


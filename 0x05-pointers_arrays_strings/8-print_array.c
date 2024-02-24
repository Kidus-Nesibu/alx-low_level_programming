#include"main.h"
#include<stdio.h>
/**
 * print_array - prints elements of array that are specified
 * @a: int pointer to accept the array
 * @n: the number of array element to printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if the generated number is postive or negative or zero
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}

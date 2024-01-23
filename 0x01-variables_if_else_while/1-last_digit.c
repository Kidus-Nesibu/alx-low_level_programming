#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints condition for the srand function
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
	{
		printf("and is greater than 5");
	}
	else if (last == 0)
	{
		printf("and is 0");
	}
	else if (last < 6)
	{
		printf("and is less than 6 and not 0 \n");
	}
	return (0);
}

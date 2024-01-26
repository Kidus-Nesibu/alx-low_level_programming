#include<stdio.h>
/**
 * main - prints the number 0 to 9
 * Return: 0 if the program runs succesfully
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar(10);
	return (0);
}

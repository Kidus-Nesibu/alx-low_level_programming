#include<stdio.h>
/**
 * main - displays number using the puchar function
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	int n;
	
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar(10);
	return (0);
}

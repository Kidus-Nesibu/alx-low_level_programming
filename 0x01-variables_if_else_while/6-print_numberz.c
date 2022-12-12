#include <stdio.h>
/**
 * main - Entry
 * Return: Always
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	return (0);
}

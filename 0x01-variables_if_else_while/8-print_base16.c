#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabet;
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
	       	number++;
	}
	while (alphabet < 'g')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
	
	return (0);

}

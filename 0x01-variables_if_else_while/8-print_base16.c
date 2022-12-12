#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';
	int number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
		while (alphabet < 'g')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
	}
	return (0);

}

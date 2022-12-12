#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
		if (lower == 'e')
		{
			lower++;
		}
		else if (lower == 'q')
		{
			lower++;
		}
	}
	putchar('\n');
	return (0);
}

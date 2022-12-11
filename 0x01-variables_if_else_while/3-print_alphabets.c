#include <stdio.h>
/**
 * main-Entry
 * Return: Always
 */
int main(void)
{
	char lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

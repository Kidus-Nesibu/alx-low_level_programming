#include "main.h"
/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}

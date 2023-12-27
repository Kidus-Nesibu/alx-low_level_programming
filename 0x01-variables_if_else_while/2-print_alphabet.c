/**
 * main - prints alphabet in lowrcase
 * Return: 0
*/
#include<stdio.h>
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}

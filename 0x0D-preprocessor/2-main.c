#include<stdio.h>
/**
 * main - prints the name of the file it was complied from
 * Return: 0 if sucsses
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}

#include<stdio.h>
/**
 * main - list the number of args
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

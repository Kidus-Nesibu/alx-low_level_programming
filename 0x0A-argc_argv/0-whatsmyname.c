#include<stdio.h>

/**
 * main - prints the first argument
 * @argc: number of arguments passed to main
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

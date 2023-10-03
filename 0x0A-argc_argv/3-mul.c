#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies args
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succses 1 if @argc is not equal to 2
 */
int main(int argc, char *argv[])
{
	int result;

	result = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
}

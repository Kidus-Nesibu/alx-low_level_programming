#include<stdio.h>
/**
 * main - displays the argument
 * @argc: argument count
 * @argv: arguent value
 * Return: 0 if sucsses
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

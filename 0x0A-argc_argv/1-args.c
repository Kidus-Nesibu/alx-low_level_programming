#include<stdio.h>
/**
 * main - prints the number of argument
 * @argc: argument count
 * @argv: argument value
 * Return: 0 if success
 */
int main(int argc, _attribute_((char *argv[])))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}

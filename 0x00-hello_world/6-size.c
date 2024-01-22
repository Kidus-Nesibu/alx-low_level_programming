#include<stdio.h>
/**
 * main - prints the size of the data type in different types of machine
 * Return: 0 if the program runs succesfully
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

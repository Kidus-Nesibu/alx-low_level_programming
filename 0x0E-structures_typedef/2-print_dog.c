#include"dog.h"
#include<stdio.h>
/**
 * print_dog - prints the struct dog
 * @d: struct data type parameter
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: %s\n", "nil");
		printf("Age: %s\n", "nil");
		printf("Owner: %s\n", "nil");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}

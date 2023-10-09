#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - dog data type
 * @d: first parameter
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing\n");
	}

	if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}

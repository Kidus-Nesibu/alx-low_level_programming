#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - dog data type
 * @d: first parameter
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("nil\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner)
		{
			printf("nil\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

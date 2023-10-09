#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * init_dog-initialize sturct
 * @name: parameter 1
 * @age: parameter 2
 * @owner: paramter 3
 * @d: pointer parmeter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}

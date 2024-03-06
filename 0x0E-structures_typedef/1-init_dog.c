#include"dog.h"
#include"stdlib.h"
/**
 * init_dog - intitializes a struct
 * @d: dog type parameter
 * @name: char string
 * @age: float
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}


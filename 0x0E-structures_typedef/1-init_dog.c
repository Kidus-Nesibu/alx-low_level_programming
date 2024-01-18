#include"dog.h"
/**
 * init_dog - intializes struct dog
 * @d: struct pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (*d)
	{
		d->name = "poppy";
		d->age = 3.5;
		d->owner = "Bob";
	}
}

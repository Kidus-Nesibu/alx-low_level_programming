#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - intitialize a dog_t type of new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if memory alloction fail or newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof (dog_t) * 1);
	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}

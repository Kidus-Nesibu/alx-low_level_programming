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
	dog_t *buchi;
	int len = 0, len2 = 0, i;

	buchi = malloc(sizeof(dog_t) * 1);
	if (buchi == NULL)
	{
		return (NULL);
	}
	while (name[len] != '\0')
		len++;
	(*buchi).name = malloc(sizeof(char) * len + 1);
	if ((*buchi).name == NULL)
	{
		free(buchi);
	}
	while (owner[len2] != '\0')
		len2++;
	(*buchi).owner = malloc(sizeof(char) * len2 + 1);
	if ((*buchi).owner == NULL)
	{
		free(buchi);
		free((*buchi).owner);
		free((*buchi).name);
	}
	for (i = 0; i < len; i++)
	{
		(*buchi).name[i] = name[i];
	}
	(*buchi).name[i] = '\0';
	for (i = 0; i < len2; i++)
	{
		(*buchi).owner[i] = owner[i];
	}
	(*buchi).owner[i] = owner[i];
	(*buchi).age = age;
	return (buchi);
}

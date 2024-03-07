#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - frees the allocated memory of @d
 * @d: the address of the allocated memory
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}

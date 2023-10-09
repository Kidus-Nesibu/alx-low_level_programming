#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains info of dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: contains neccesary information of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

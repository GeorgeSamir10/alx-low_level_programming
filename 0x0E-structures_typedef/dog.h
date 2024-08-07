#ifndef DOG_H
#define DOG_H

/**
*struct dog - struct with name dog
* @name: dog's name
* @owner: dog's owner's name
* @age: dog's age
*/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

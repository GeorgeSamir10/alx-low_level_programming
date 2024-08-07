#include "dog.h"

/**
* init_dog - inilizes a struct variable type dog.
* @d: the struct to initialize
* @name: dog name.
* @age: dog age.
* @owner: dog owner.
* Return: void.
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

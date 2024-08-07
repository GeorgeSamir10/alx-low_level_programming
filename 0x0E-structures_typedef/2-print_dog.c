#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a dog
* @d: dog struct to print
* Return: void.
*/

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		return;

	name = d->name;
	age = d->age;
	owner = d->owner;

	if (name)
		printf("Name: %s\n", name);
	else
		printf("Name: (nil)");

	if (age)
		printf("Age: %f\n", age);
	else
		printf("Age: (nil)");
	if (owner)
		printf("Owner: %s\n", owner);
	else
		printf("Owner: (nil)");
}

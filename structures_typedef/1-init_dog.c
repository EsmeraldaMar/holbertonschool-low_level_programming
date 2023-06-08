#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - it initializes variable of type struct dog
 * @d: structure made for variables to be stored for dog
 * @name: name of doggo
 * @age: age of doggo
 * @owner: dog's owner's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

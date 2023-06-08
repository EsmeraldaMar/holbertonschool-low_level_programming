#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - new type of data for doggo
 * @name: name of doggo
 * @age: age of doggo, is he young or old?
 * @owner: doggo's owner's name, food giver
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

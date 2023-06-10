#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new doggo
 * @name: name of doggo
 * @age: age of doggo
 * @owner: name owner of doggo
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (owner[i] != '\0')
		i++;
	dog->owner = malloc(sizeof(char) * (i + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';
	dog->age = age;
	i = 0;
	while (owner[i] != '\0')
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';
	return (dog);
}

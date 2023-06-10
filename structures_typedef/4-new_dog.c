#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - copies string 
 * @str: string to be copied
 * Return: char *
 */
char *_strdup(char *str)
{
	int i = 0;
	char *new_str;

	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
	
}

/**
 * dog_t - creates a new doggo
 * @name: name of doggo
 * @age: age of doggo
 * @owner: name owner of doggo
 * Return: void
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
	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);
	return (dog);
}

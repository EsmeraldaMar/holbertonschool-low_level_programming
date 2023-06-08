#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - it print's doggos details
 * @d: doggos variables
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s", "Name: ");
		if (d->name == NULL)
			printf("%s\n", "(nil)");
		else
			printf("%s\n", d->name);
		printf("%s", "Age: ");
		if (d->age == 0.0f)
			printf("%s\n", "(nil)");
		else
			printf("%f\n", d->age);
		printf("%s", "Owner: ");
		if (d->owner == NULL)
			printf("%s\n", "(nil)");
		else
			printf("%s\n", d->owner);
	}
}

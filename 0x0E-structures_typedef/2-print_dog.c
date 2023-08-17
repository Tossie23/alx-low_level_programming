#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
	/* Handle the error if any of the pointers are NULL */
	return;
	}

	/* Allocate memory for the name and owner strings */
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
	/* Handle the error if memory allocation fails */
	free(d->name);
	free(d->owner);
	return;
	}

	/* Copy the name and owner strings */
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	/* Assign the age */
	d->age = age;
}

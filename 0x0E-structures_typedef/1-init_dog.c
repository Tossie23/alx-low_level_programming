#include "dog.h"
#include <string.h>

/**
 * init_dog - Function to initialize a struct of type dog
 * @d: Pointer to a struct of type dog
 * @name: Pointer to a character string representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a character string representing the dog's owner
 *
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0';
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0';

}

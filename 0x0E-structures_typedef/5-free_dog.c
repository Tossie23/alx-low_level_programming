#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to a dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

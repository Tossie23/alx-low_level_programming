#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function to print a struct of type dog
 * @d: Pointer to a struct of type dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}

	printf("Age: %.1f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
}

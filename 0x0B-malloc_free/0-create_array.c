#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars and initializes with specific char.
 * @size: The size of the array.
 * @c: The character with which to initialize the array.
 *
 * Return: pointer to array,NULL if size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

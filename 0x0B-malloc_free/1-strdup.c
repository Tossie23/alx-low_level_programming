#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate of a given string.
 * @str: The string to be duplicated.
 *
 * Return: pointer to duplicated string,NULL str is 0 memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

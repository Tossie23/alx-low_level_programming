#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: pointer to concatenated string,0 memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0';

	return (concatenated);
}

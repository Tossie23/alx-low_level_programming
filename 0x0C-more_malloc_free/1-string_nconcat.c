#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 *         If the function fails to allocate memory, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, concat_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concatenated = malloc((concat_len + 1) * sizeof(char));
	if (concatenated == NULL) {
		return (NULL);
	}

	for (i = 0; i < len1; i++) {
		concatenated[i] = s1[i];
	}

	for (j = 0; j < n; j++) {
		concatenated[i++] = s2[j];
	}

	concatenated[i] = '\0';

	return (concatenated);
}

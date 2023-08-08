#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: pointer to array of strings, 0 if str is NULL,empty, mem alloc fail
 */
char **strtow(char *str)
{
	int i, j, word_count;
	char **words;

	if (str == NULL || *str == '\0')
	return (NULL);
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			j = 0;
			while (str[j] != '\0' && str[j] != ' ')
				j++;
			words[i] = (char *)malloc((j + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; str[j] != '\0' && str[j] != ' '; j++)
				words[i][j] = str[j];
			words[i][j] = '\0';
			i++;
		}
		str += strspn(str, " ");
		str += strcspn(str, " ");
	}
	words[i] = NULL;
	return (words);
}

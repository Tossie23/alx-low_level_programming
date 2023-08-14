#include "main.h"
#include <stdlib.h>
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: pointer to array of strings, 0 if str is NULL,empty, mem alloc fail
 */
#include <stdlib.h>
#include <string.h>
#include "main.h"

int is_whitespace(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (is_whitespace(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return (count);
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return (NULL);
    }

    int num_words = count_words(str);

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return (NULL);
    }

    int word_index = 0;
    int in_word = 0;
    char *word_start = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_whitespace(str[i])) {
            if (!in_word) {
                in_word = 1;
                word_start = &str[i];
            }
        } else {
            if (in_word) {
                in_word = 0;
                int word_length = &str[i] - word_start;
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    for (int j = 0; j < word_index; j++) {
                        free(words[j]);
                    }
                    free(words);
                    return (NULL);
                }
                strncpy(words[word_index], word_start, word_length);
                words[word_index][word_length] = '\0';
                word_index++;
            }
        }
	}
	if (in_word)
	{
	int word_length = &str[strlen(str)] - word_start;
	words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
	if (words[word_index] == NULL)
       	{
	for (int j = 0; j <= word_index; j++)
       	{
	free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strncpy(words[word_index], word_start, word_length);
	words[word_index][word_length] = '\0';
	word_index++;
	}

	words[word_index] = NULL;
	return (words);
}

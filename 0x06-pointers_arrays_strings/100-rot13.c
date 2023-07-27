#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
		}
	}

	return (str);
}

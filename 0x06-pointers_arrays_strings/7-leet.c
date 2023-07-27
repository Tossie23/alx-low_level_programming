include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";

	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		while (leet_chars[i] != '\0')
		{
			if (*ptr == leet_chars[i] || *ptr == leet_chars[i] + 32)
			{
				*ptr = leet_replacements[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}

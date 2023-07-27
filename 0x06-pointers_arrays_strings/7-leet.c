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
	char *leet_nums = "43071";

	while (*ptr != '\0')
	{
		char *leet_char = leet_chars;
		char *leet_num = leet_nums;

		for (; *leet_char != '\0'; leet_char++, leet_num++)
		{
			if (*ptr == *leet_char || *ptr == (*leet_char + 32))
			{
				*ptr = *leet_num;
				break;
			}
		}

		ptr++;
	}

	return (str);
}

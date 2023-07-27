#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_nums = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*ptr != '\0')
	{
		for (i = 0; rot13_chars[i] != '\0'; i++)
		{
			if (*ptr == rot13_chars[i])
			{
				*ptr = rot13_nums[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}

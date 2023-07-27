#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (capitalize_next)
				*ptr = (*ptr) - ('a' - 'A');

			capitalize_next = 0;
		}
		else
		{
			switch (*ptr)
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				case '}':
					capitalize_next = 1;
					break;
				default:
					capitalize_next = 0;
			}
		}

		ptr++;
	}

	return (str);
}

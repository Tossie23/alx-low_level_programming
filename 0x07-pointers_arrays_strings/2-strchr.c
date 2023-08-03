#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}

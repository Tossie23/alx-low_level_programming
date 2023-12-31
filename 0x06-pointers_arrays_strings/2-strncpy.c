#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_ptr[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest_ptr[i] = '\0';
	}

	return (dest);
}

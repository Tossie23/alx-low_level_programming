#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to use.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int dest_len = 0;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
		dest_len++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}

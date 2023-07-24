#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src, plus null byte to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')

	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}

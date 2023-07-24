#include "main.h"

/**
 * puts_half - Print the second half of a string.
 * @str: The input string.
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i, start;

	if (length % 2 == 0)

		start = length / 2;
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

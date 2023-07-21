#include "main.h"

/**
 * _putchar - Prints a character to stdout
 * @c: The character to be printed
 *
 * Return: On success 1, on error, -1 is returned, errno set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is > zero, 0 if n is zero, -1 if n is < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

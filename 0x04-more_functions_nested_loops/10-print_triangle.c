#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			/* Print spaces before the '#' characters */
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}

			/* Print the '#' characters for the current row */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			/* Move to the next row */
			_putchar('\n');
		}
	}
}

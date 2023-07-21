#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The value to determine the size of the times table
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');

		for (column = 1; column <= n; column++)
		{
			product = row * column;

			_putchar(',');
			_putchar(' ');

			if (product < 100)
				_putchar(' ');

			if (product < 10)
				_putchar(' ');

			if (product >= 100)
				_putchar('0' + product / 100);

			if (product >= 10)
				_putchar('0' + (product / 10) % 10);

			_putchar('0' + product % 10);
		}
		_putchar('\n');
	}
}

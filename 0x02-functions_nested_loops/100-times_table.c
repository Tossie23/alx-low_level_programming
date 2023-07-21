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
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column == 0)
				_putchar('0');
			else
			{
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
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The value to determine the size of the times table
 *
 * Description: This function prints the n times table, where n is a non-negative
 *              integer between 0 and 15 (inclusive).
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar('	'); /* Single tab */
					_putchar('	'); /* Single tab */
					_putchar('	'); /* Single tab */
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar('	'); /* Single tab */
					_putchar('	'); /* Single tab */
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar('	'); /* Single tab */
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

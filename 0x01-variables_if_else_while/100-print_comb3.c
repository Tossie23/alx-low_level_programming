#include <stdio.h>

/**
 * main - Start here, prints all possible different combinations of two digits
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		if (i != 0)
			{
			putchar(i + '0');
			}
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

			}
		}
	}
	putchar("\n");
	return (0);
}

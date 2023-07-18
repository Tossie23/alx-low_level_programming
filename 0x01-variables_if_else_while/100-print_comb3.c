#include <stdio.h>

/**
 * main - Start here, prints all possible different combinations of two digits
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 9 || j < 8)
			{
				putchar(',');
				putchar(' ');
			}

			if (j == 9)
			{
				i++;
				j = i;
			}
		}
	}
	putchar('\n');
	return (0);
}


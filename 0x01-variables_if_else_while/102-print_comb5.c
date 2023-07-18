#include <stdio.h>
/**
 * main - Start here, prints all possible two two digit numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar('\t');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (!((i == 98) && (j == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

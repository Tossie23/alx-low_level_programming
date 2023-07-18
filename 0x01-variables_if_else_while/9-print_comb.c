#include <stdio.h>

/**
 * main - Start here prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i != 9)
	{
	for (j = i; j < 10; j++)
	{
	putchar(',');
	putchar(' ');
	putchar(j + '0');
	}

	}
	}

	return (0);
}


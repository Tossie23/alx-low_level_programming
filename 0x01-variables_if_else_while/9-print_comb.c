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
	for (j = i; j < 10; j++)
	{
	putchar(i + '0');
	if (i != j)
	{
	putchar(j + '0');
	}
	if (i != 9 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	return (0);
}

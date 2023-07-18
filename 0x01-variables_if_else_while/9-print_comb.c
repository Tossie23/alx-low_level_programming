#include <stdio.h>

/**
 * main - Start here prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i, j, counter = 0;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
	if (counter != 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar(i + '0');
	if (i != j)
	{
	putchar(j + '0');
	}
	counter++

	}
	}

	return (0);
}


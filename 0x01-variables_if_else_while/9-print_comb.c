#include <stdio.h>

/**
 * main - Start here prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i != 9)

	{
	putchar(',');
	putchar(' ');
	}
	}

	return (0);
}


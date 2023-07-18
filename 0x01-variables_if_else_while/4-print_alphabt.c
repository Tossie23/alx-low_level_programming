#include <stdio.h>

/**
 * main - Start here program to print lowercase followed by uppercase
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	/* Print lowercase */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	/* Print uppercase */
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}


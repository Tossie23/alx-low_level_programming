#include <stdio.h>

/**
 * main - Start here program to print alphabet skip q and e
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}

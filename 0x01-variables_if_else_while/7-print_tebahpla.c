#include <stdio.h>

/**
 * main - Start here
 *
 * Description: Prints the lowercase in reverse
 * Return: 0 (Successful)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

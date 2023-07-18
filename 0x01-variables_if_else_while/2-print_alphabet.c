#include <stdio.h>

/**
 * main - Strat program to print alpahbet in lowercase using only putchar
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}

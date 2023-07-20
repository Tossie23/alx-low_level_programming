#include "main.h"


/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	char letter;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

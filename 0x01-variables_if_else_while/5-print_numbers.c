#include <stdio.h>

/**
 * main - Start here program to  prints all single digit numbers of base ten
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar(num + '0');

	putchar('\n');

	return (0);
}

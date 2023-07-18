#include <unistd.h>

/**
 * main - Start here, prints single digit numbers of base ten without char
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');

	return (0);
}

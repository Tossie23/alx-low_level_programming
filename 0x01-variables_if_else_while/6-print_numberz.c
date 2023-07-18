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
	write(1, &i, 1);
	}
	write(1, "\n", 1);

	return (0);
}

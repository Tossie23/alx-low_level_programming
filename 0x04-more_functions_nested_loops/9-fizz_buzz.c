#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with Fizz, Buzz, or FizzBuzz conditions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		/* Add space after each number or word (except for the last) */
		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}

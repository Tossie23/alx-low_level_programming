#include <stdio.h>
#include <math.h>

/**
 * is_prime - Checks if a number is prime.
 * @num: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(unsigned long num)
{
	if (num <= 1)
		return (0);

	if (num == 2)
		return (1);

	unsigned long i;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return (0);
	}

	return (1);
}

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the number.
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long largest_factor = 0;
	unsigned long i;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
				largest_factor = i;

			/* Divide by the factor to get the other factor */
			while (num % i == 0)
				num /= i;
		}
	}

	/* If the remaining number after division is greater than 1, it is a prime factor */
	if (num > 1)
		largest_factor = num;

	return (largest_factor);
}

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_prime = largest_prime_factor(number);

	printf("%lu\n", largest_prime);

	return (0);
}

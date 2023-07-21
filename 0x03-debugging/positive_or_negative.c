#include "main.h"

/**
 * positive_or_negative - Check if the given number is positive or negative
 * @i: The number to be checked
 *
 * Return: None
 */

void positive_or_negative(int i)

{
	if (i > 0)
		printf("Positive\n");
	else if (i < 0)
		printf("Negative\n");
	else
		printf("Zero\n");
}

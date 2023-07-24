#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two pointers to integers as parameters
 * and swaps the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
	/* Store the value of the first integer in a temporary variable */
	int temp = *a;

	/* Assign the value of the second integer to the first integer */
	*a = *b;

	/* Assign the value of the temporary variable to the second integer */
	*b = temp;
}

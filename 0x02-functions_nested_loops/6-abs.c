#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer
 * @num: The integer for which to calculate the absolute value
 *
 * Return: The absolute value of the integer.
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}

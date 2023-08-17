#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if a string is a valid number
 * @number: The string to be checked
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid_number(char *number)
{
	int i = 0;

	while (number[i] != '\0')
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply_numbers - Multiplies two numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of the two numbers
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply_numbers(num1, num2);
	printf("%d\n", result);

	return (0);
}

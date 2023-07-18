#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  Start hereto print the last digit of the number stored
 * Return: 0 (Succesful)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
	printf("The last digit of %d is %d and is greater than 5\n", n, lastdigit);

	}
	else if (lastdigit == 0)
       	{
	printf("The last digit of %d is %d and is 0\n", n, lastdigit);
	}

	else if (lastdigit < 6 && lastdigit != 0) 
	{
	printf(""The last digit of %d is %d and is less than 6 and not 0\n, n, lastdigit);
	}
	return (0);
}

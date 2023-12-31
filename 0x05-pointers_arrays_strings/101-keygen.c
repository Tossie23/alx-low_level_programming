#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates keygen.
 * Return: 0 (Success)
 */
int main(void)
{
    int c = 0;
    time_t t;

    srand((unsigned int)time(&t));

    while (c < 2772)
    {
        int r = rand() % 128;
        if ((c + r) > 2772)
        {
            break;
        }
        c = c + r;
        putchar(r);
    }

    putchar(2772 - c);
    putchar('\n');

    return (0);
}

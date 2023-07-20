#include <unistd.h> 

/* Include the necessary library for the 'write' system call */

void _putchar(char c)
{
/* Use the 'write' system call to print the character to stdout */
write(1, &c, 1);
}

int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

int main()
{
int num = 42;
int sign = print_sign(num);

return (0);
}

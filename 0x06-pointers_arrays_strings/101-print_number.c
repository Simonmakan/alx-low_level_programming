#include "main.h"
/**
 * print_number - int printout
 * @n: int
 */
void print_number(int n)
{
unsigned int s = n;

if (n < 0)
{
_putchar(45);
s = -s;
}
if (s / 10)
{
print_number(s / 10);
}
_putchar(s % 10 + '0');
}

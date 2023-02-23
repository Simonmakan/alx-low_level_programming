#include "main.h"
/**
 * print_line - draw straight line
 * @n: times
 * Return: (void)
 */
void print_line(int n)
{
int s;

if (n > 0)
{
for (s = 0; s < n; s++)
{
_putchar('_');
}
}
_putchar('\n');
}

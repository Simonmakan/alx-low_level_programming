#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: xtimes
 * Return: (void)
 */
void print_diagonal(int n)
{
int s;
int m;

if (n > 0)
{
for (m = 0; m < n; m++)
{
for (s = 0; s < m; s++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}

#include "main.h"
/**
 * print_square - print sq
 * @size: area
 * Return: (void)
 */
void print_square(int size)
{
int s;
int m;
int n = size;

if (n > 0)
{
for (m = 0; m < n; m++)
{
for (s = 0; s < n; s++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}

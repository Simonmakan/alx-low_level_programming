#include"main.h"
/**
 * print_triangle - print triangle
 * @size: area
 * Return: (void)
 */
void print_triangle(int size)
{
int p1 = 0;
int p2 = 0;
int sp = 0;
int out = 0;

for (p1 = 1; p1 <= size; p1++)
{
sp = size - p1;
out = size - sp;

for (p2 = 1; p2 <= sp; p2++)
{
_putchar(' ');
}
for (p2 = 1; p2 <= out; p2++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}

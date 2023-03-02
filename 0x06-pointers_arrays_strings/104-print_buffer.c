#include "main.h"
#include <stdio.h>
/**
 * print_buffer - buffer outupit
 * @b: name
 * @size: size of buffer
 * Return: nothing (void)
 */
void print_buffer(char *b, int size)
{
int s;
int m;
int n;

s = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (s < size)
{
m = size - s < 10 ? size - s : 10;
printf("%08x: ", s);
for (n = 0; n < 10; n++)
{
if (n < m)
printf("%02x", *(b + s + n));
else
printf("  ");
if (n % 2)
{
printf(" ");
}
}
for (n = 0; n < m; n++)
{
int p = *(b + s + n);
if (p < 32 || p > 132)
{
p = '.';
}
printf("%c", p);
}
printf("\n");
s += 10;
}
}

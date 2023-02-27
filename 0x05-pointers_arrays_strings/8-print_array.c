#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements of an arrray
 * @a: array name
 * @n: no of elements
 * Return: void
 */
void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
printf("\n");
}

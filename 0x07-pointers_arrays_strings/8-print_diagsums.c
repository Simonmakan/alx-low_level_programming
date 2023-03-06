#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - sum diagonals of a matrix
 *@a: pointer (address)
 *@size: size
 *Return: (void)
 */
void print_diagsums(int *a, int size)
{
int s, m;
int n = 0, p = 0;

for (s = 0; s < size * size; s = s + (size + 1))
{
n = n + a[s];
}
for (m = size - 1; m < size * size - 1; m = m + (size - 1))
{
p = p + a[m];
}
printf("%d, %d\n", n, p);
}

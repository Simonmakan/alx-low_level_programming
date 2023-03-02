#include "main.h"
/**
 * reverse_array - rev array
 * @a: integers 
 * @n: no of int
 */
void reverse_array(int *a, int n)
{
int s, tmp;

s = 0;
n = n - 1;
while (s < n)
{
tmp = a[s];
a[s] = a[n];
a[n] = tmp;
s++;
n--;
}
}


#include "main.h"
/**
 *get_prime - no (prime/unprime) 
 *@p: no.
 *@v: var.
 *Return: (1 & 0)
 */
int get_prime(int v, int p)
{
if (p == v)
return (1);
else if (p % v == 0)
return (0);
else
return (get_prime(v + 1, p));
}
/**
 *is_prime_number - number (prime/unprime)
 *@n: no.
 *Return: (1 & 0)
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n == 2)
return (1);
return (get_prime(2, n));
}


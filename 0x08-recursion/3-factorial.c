#include "main.h"
/**
 *factorial - factorial no.
 *@n: no.
 *Return: (0 & 1)
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}

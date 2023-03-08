#include "main.h"
/**
 *find_sq - sq root no.
 *@y: no.
 *@x: var
 *Return: (-1)
 */
int find_sq(int x, int y)
{
if ((x * x) == y)
{
return (x);
}
if (x > (y / 2))
{
return (-1);
}
return (find_sq(x + 1, y));
}
/**
 *_sqrt_recursion - sq rt no.
 *@n: no.
 *Return: (-1)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
return (find_sq(2, n));
}

#include "main.h"
/**
 * more_numbers - print no xten 
 * Return: (void)
 */
void more_numbers(void)
{
int s;
int m;
int n;
int p;

for (m = 0; m <= 9; m++)
{
n = 0;
p = 0;
for (s = 48; s < 63; s++)
{
if (!(s > 57))
p = s;
else
{
p = s - 10;
n = 49;
_putchar(n);
}
_putchar(p);
}
_putchar('\n');
}
}


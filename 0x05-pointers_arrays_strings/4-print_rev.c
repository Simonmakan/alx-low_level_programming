#include "main.h"
/**
 * print_rev - string in reverse
 * @s: string name 
 * Return: void
 */
void print_rev(char *s)
{
int fcounter = 0;
int i;
int n;

for (i = 0; s[i] != '\0'; i++)
{
fcounter++;
}
for (n = (fcounter - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}


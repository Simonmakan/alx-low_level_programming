#include "main.h"
/**
 *_puts_recursion - string and newline
 *@s: pointer
 *Return: (void)
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar(10);
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}


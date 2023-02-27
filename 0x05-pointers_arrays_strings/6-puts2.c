#include "main.h"
/**
 * puts2 - print xters
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
int n = 0;

for (; str[n] != '\0'; n++)
{
if ((n % 2) == 0)
_putchar(str[n]);
else
continue;
}
_putchar('\n');
}


#include "main.h"
/**
 *_strlen_recursion - length
 *@s: pointer
 *Return: (1)
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s != 0)
{
i = _strlen_recursion(s + 1);
return (++i);
}
return (i);
}

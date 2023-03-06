#include "main.h"
/**
 *_strchr - locater
 *@s: pointer (address)
 *@c: xter
 *Return: (address)
 */
char *_strchr(char *s, char c)
{
char *m = s;

while (*m != 0 && *m != c)
{
m++;
}
if (*m != c)
{
return (0);
}
return (m);
}


#include "main.h"

/**
 *_strpbrk - search
 *@s: pointer (address)
 *@accept: pointer (string)
 *Return: (addres)
 */
char *_strpbrk(char *s, char *accept)
{
int m;

while (*s != 0)
{
for (m = 0; accept[m] != 0; m++)
{
if (*s == accept[m])
{
return (s);
}
}
s++;
}
return (0);
}

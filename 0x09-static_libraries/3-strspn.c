#include "main.h"
/**
 *_strspn - length substring
 *@s: pointer 1
 *@accept: pointer (substring)
 *Return: (length)
 */
unsigned int _strspn(char *s, char *accept)
{
int m, n, p;

for (m = 0; s[m] != 0; m++)
{
n = 0;
for (p = 0; accept[p] != 0; p++)
{
if (s[m] == accept[p])
{
n = 1;
}
}
if (n == 0)
{
break;
}
}
return (m);
}

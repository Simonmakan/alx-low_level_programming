#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate strings
 * @s1: string1
 * @s2: string2
 * Return: (void)/pointer 
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int m, n, p, q;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (m = 0; s1[m] != '\0'; m++)
;
for (n = 0; s2[n] != '\0'; n++)
;
n++;
s = malloc(m * sizeof(*s1) + n * sizeof(*s2));
if (s == 0)
return (NULL);
for (p = 0, q = 0; p < m + n; p++)
{
if (p < m)
s[p] = s1[p];
else
s[p] = s2[q++];
}
return (s);
}

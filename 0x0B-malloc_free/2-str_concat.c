#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - conc strings
 *@s1: string1
 *@s2: string2
 *Return: (pointer/NULL)
 */
char *str_concat(char *s1, char *s2)
{
int m1, m2, length_1, length_2;
char *s;

if (s1 == 0)
{
s1 = "";
}
for (length_1 = 0; s1[length_1] != 0; length_1++)
if (s2 == 0)
{
s2 = "";
}
for (length_2 = 0; s2[length_2] != 0; length_2++)
s = malloc(sizeof(char) * (length_1 + length_2 + 1));
if (s == 0)
{
return (0);
}
for (m1 = 0; m1 < length_1; m1++)
{
s[m1] = s1[m1];
}
for (m2 = 0; m2 < length_2; m1++, m2++)
{
s[m1] = s2[m2];
}
s[m1] = 0;
return (s);
}

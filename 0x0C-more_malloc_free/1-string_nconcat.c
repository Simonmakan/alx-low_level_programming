#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - conc strings
 * @s1: string1
 * @s2: string2
 * @n: size of malloc
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int s, m, k, l;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (s = 0; s1[s] != '\0'; s++)
;
for (m = 0; s2[m] != '\0'; m++)
;
if (n > m)
ptr = malloc((s + b + 1) * sizeof(char));
else
ptr = malloc((s + n + 1) * sizeof(char));
if (ptr == 0)
return (NULL);
for (k = 0; k < s; k++)
ptr[k] = s1[k];
for (l = 0; l < n && l < m; l++, k++)
ptr[k] = s2[l];
ptr[k] = '\0';
return (ptr);
}

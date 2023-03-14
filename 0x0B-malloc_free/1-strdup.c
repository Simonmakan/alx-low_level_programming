#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function name
 * @str: string (copy)
 * Return: (Null)/ ptr.
 */
char *_strdup(char *str)
{
char *s;
int m;
int n;

if (str == 0)
return (NULL);
for (m = 0; str[m] != '\0'; m++)
;
m++;
s = malloc(m *sizeof(*s));
if (s == 0)
return (NULL);
for (n = 0; n < m; n++)
s[n] = str[n];
return (s);
}

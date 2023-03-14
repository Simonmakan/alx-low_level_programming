#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - funcon ng
 * @str: string t coped
 * Return: Null for f// ptr.
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
a++;
s = malloc(a * sizeof(*s));
if (s == 0)
return (NULL);
for (b = 0; b < a; b++)
s[b] = str[b];
return (s);
}

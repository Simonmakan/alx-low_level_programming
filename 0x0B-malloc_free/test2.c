#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - pointer to new space
 *contains string parameter
 *@str: string to be copied
 *Return: pointer/NULL
 */
char *_strdup(char *str)
{
int m, length;
char *s;

if (str == 0)
{
return (0);
}
for (length = 0; str[length] != 0; length++)
length++;
s = malloc(sizeof(char) * length);
if (s == 0)
{
return (0);
}
for (m = 0; m <= length; m++)
{
s[m] = str[m];
}
return (s);
}

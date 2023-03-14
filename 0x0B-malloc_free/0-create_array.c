#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates array of chars
 *char
 *@size: array size
 *@c: xters
 *Return: pointer/NULL
 */
char *create_array(unsigned int size, char c)
{
char *m;
unsigned int s;

if (size == 0)
{
return (0);
}
m = malloc(sizeof(char) * size);
if (m == 0)
{
return (0);
}
for (s = 0; s < size; s++)
{
*(m + s) = c;
}
return (m);
}
